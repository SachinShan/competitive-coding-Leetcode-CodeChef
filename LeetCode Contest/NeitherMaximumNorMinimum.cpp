class Solution
{
public:
    int findNonMinOrMax(vector<int> &nums)
    {
        int n = nums.size();
        if (n < 3)
        {
            return -1;
        }
        sort(nums.begin(), nums.end());

        for (int i = 1; i < n - 1; i++)
        {
            if (nums[i] != nums[0] && nums[i] != nums[n - 1])
            {
                return nums[i];
            }
        }
        return -1;
    }
};