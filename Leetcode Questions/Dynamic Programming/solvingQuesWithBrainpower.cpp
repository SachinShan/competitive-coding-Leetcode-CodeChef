class Solution
{
public:
    long long solve(int ind, long long ans, int n, vector<vector<int>> &ques, vector<long long> &dp)
    {

        if (ind >= n)
        {
            return ans;
        }
        if (dp[ind] != -1)
        {
            return dp[ind];
        }

        long long notpick = solve(ind + 1, ans, n, ques, dp);
        long long pick = ques[ind][0] + solve(ind + ques[ind][1] + 1, ans, n, ques, dp);

        return dp[ind] = ans + max(notpick, pick);
    }

    long long mostPoints(vector<vector<int>> &ques)
    {
        long long ans = 0;
        int n = ques.size();
        vector<long long> dp(n + 1, -1);

        return solve(0, ans, n, ques, dp);
    }
};