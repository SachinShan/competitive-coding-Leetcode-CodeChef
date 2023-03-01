class Solution
{
public:
    int solve(int i, int n, vector<int> &cost, vector<int> &dp)
    {
        if (i == n - 1)
        {
            return cost[i];
        }
        if (i >= n)
        {
            return 0;
        }
        if (dp[i] != -1)
        {
            return dp[i];
        }
        int one = solve(i + 1, n, cost, dp);
        int two = solve(i + 2, n, cost, dp);

        return dp[i] = cost[i] + min(one, two);
    }

    int minCostClimbingStairs(vector<int> &cost)
    {
        int n = cost.size();
        vector<int> dp(n, -1);

        return min(solve(0, n, cost, dp), solve(1, n, cost, dp));
    }
};