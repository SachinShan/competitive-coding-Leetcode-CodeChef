class Solution
{
public:
    long long maxStrength(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        if (n == 1)
        {
            return nums[0];
        }

        int ind;
        int neg = 0;
        int zer = 0;
        int pos = 0;
        int maxi = INT_MIN;
        long long ans = 1;

        for (ind = 0; ind < n; ind++)
        {
            if (nums[ind] == 0)
            {
                zer++;
                continue;
            }

            if (nums[ind] < 0)
            {
                neg++;
                maxi = max(maxi, nums[ind]);
            }

            if (nums[ind] > 0)
            {
                pos++;
            }
            ans = ans * abs(nums[ind]);
        }

        if (zer == n)
        {
            return 0;
        }
        if (neg + zer == n && neg == 1)
        {
            return 0;
        }
        if (neg % 2 == 0)
        {
            return ans;
        }
        else
        {
            return (ans / abs(maxi));
        }
    }
};