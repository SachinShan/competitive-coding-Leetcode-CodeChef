class Solution
{
public:
    int minPairSum(vector<int> &nums)
    {
        int n = nums.size();

        sort(nums.begin(), nums.end());
        int l = 0;
        int r = n - 1;
        int ans = INT_MIN;

        while (l < r)
        {
            int temp = nums[l] + nums[r];
            ans = max(ans, temp);
            l++;
            r--;
        }
        return ans;
    }
};