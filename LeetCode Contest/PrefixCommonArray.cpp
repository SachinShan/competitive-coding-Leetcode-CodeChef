class Solution
{
public:
    vector<int> findThePrefixCommonArray(vector<int> &A, vector<int> &B)
    {
        unordered_map<int, bool> mapp;

        int n = A.size();
        int m = B.size();
        vector<int> ans;

        for (int i = 0; i < n; i++)
        {
            mapp[A[i]] = true;
            int cnt = 0;
            for (int j = 0; j <= i; j++)
            {
                if (mapp[B[j]])
                {
                    cnt++;
                }
            }
            ans.push_back(cnt);
        }
        return ans;
    }
};