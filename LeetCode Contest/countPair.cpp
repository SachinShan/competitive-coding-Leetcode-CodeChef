class Solution
{
public:
    int countPairs(vector<int> &nums, int target)
    {
        sort(nums.begin(), nums.end()); // Sort the array in ascending order
        int count = 0;
        int left = 0;
        int right = nums.size() - 1;

        while (left < right)
        {
            if (nums[left] + nums[right] < target)
            {
                // If the sum is less than target, then all elements between left and right
                // will also create sums less than target when paired with nums[left]
                count += right - left;
                left++; // Move the left pointer to the right
            }
            else
            {
                right--; // Move the right pointer to the left
            }
        }

        return count;
    }
};
