class Solution
{
public:
    int maxCount(vector<int> &banned, int n, int maxSum)
    {

        // vector<int> ans;
        int count = 0;
        unordered_map<int, bool> mapp;

        for (int i = 0; i < banned.size(); i++)
        {
            mapp[banned[i]] = true;
        }

        long long sum = 0;
        for (int i = 1; i <= n; i++)
        {

            if (!mapp[i])
            {
                sum += i;
                if (sum <= maxSum)
                {
                    // ans.push_back()
                    count++;
                }
            }
        }
        return count;
    }
};