class Solution
{
public:
    int maxScore(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        reverse(nums.begin(), nums.end());
        int n = nums.size();
        vector<long long> prefix(n, 0);
        prefix[0] = nums[0];

        for (int i = 1; i < n; i++)
        {
            prefix[i] = nums[i] + prefix[i - 1];
        }

        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (prefix[i] > 0)
            {
                ans++;
            }
        }
        return ans;
    }
};
