class Solution
{
public:
    int minimumSum(int n, int k)
    {

        vector<int> ans;
        ans.push_back(1);
        int i = 2;
        int res = 1;
        while (ans.size() < n)
        {
            int flag = 1;
            for (int j = 0; j < ans.size(); j++)
            {
                if (ans[j] + i == k)
                {
                    flag = 0;
                    break;
                }
            }

            if (flag)
            {
                ans.push_back(i);
                res += i;
            }
            i++;
        }

        return res;
    }
};