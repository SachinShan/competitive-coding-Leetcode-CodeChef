// class Solution {
// public:
//     int minimizeSum(vector<int>& nums) {

//     }
// };

class Solution
{
public:
    int minimizeSum(vector<int> &nums)
    {
        int n = nums.size();

        if (n <= 3)
        {
            return 0;
        }
        sort(nums.begin(), nums.end());

        int low1 = nums[n - 3] - nums[0];
        int low2 = nums[n - 2] - nums[1];
        int low3 = nums[n - 1] - nums[2];

        return min(low1, min(low2, low3));
    }
};
