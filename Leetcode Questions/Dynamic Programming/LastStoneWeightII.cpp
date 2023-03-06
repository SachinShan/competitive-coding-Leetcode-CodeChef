class Solution
{
public:
    int fun(int ind, int total, int target, int sum, vector<int> &stones, vector<vector<int>> &dp)
    {
        if (total >= target || ind >= stones.size())
        {
            return abs(total - (sum - total));
        }
        if (dp[ind][total] != -1)
        {
            return dp[ind][total];
        }
        int notTake = fun(ind + 1, total, target, sum, stones, dp);
        int take = fun(ind + 1, total + stones[ind], target, sum, stones, dp);

        return dp[ind][total] = min(notTake, take);
    }

    int lastStoneWeightII(vector<int> &stones)
    {
        int sum = accumulate(stones.begin(), stones.end(), 0);
        int target = ceil(sum / 2);
        vector<vector<int>> dp(stones.size(), vector<int>(target + 1, -1));

        return fun(0, 0, target, sum, stones, dp);
    }
};