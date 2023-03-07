// Recursion......

class Solution
{
public:
    int fun(int ind, int total, int target, vector<int> &nums)
    {
        if (ind == nums.size())
        {
            if (total == target)
                return 1;
            else
                return 0;
        }
        return fun(ind + 1, total + nums[ind], target, nums) + fun(ind + 1, total - nums[ind], target, nums);
    }

    int findTargetSumWays(vector<int> &nums, int target)
    {
        int n = nums.size();

        return fun(0, 0, target, nums);
    }
};