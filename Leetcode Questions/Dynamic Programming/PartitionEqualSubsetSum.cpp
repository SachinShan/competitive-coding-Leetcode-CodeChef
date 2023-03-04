// Recursion

class Solution
{
public:
    bool fun(int ind, int target, vector<int> &arr)
    {
        if (target == 0)
        {
            return true;
        }
        if (ind == 0)
        {
            return arr[0] == target;
        }

        bool notTake = fun(ind - 1, target, arr);
        bool take = false;
        if (arr[ind] <= target)
        {
            take = fun(ind - 1, target - arr[ind], arr);
        }

        return take | notTake;
    }

    bool canPartition(vector<int> &nums)
    {
        int n = nums.size();

        int sum = accumulate(nums.begin(), nums.end(), 0);
        if (sum % 2 != 0)
        {
            return false;
        }
        return fun(n - 1, sum / 2, nums);
    }
};