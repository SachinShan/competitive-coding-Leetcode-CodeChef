class Solution
{
public:
    int maximumJumps(vector<int> &nums, int target)
    {
        int n = nums.size();
        vector<int> dp(n, 0);

        for (int i = 1; i < n; i++)
        {
            dp[i] = 0;
            for (int j = i - 1; j >= 0; j--)
            {
                if (abs(nums[i] - nums[j]) > target)
                    continue;

                if (dp[j] == 0 && j != 0)
                    continue;

                int ans = dp[j] + 1;
                dp[i] = max(dp[i], ans);
            }
        }

        if (dp[n - 1] == 0)
            return -1;

        return dp[n - 1];
    }
};
