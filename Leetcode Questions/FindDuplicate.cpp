class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {

        int slow = nums[0];
        int fast = nums[0];

        do
        {
            slow = nums[slow]; // Traversing to next pointer using the value of the current index as the next index.....

            fast = nums[nums[fast]]; // Treversing two steps at a time......
        } while (slow != fast);

        fast = nums[0];
        while (slow != fast)
        {
            slow = nums[slow];
            fast = nums[fast];
        }

        return slow;
    }
};