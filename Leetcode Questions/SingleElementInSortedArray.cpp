class Solution
{
public:
    int single(int left, int right, vector<int> &nums)
    {
        int mid = (left + right) / 2;

        if (mid % 2 != 0)
        {
            if (mid - 1 >= 0 && nums[mid] == nums[mid - 1])
            {
                return single(mid + 1, right, nums);
            }
            else if (mid + 1 < nums.size() && nums[mid] == nums[mid + 1])
            {
                return single(left, mid - 1, nums);
            }
            else
            {
                cout << "Ye wala return kiya" << mid << endl;
                return nums[mid];
            }
        }
        else
        {
            if (mid + 1 < nums.size() && nums[mid] == nums[mid + 1])
            {
                return single(mid + 1, right, nums);
            }
            else if (mid - 1 >= 0 && nums[mid] == nums[mid - 1])
            {
                return single(left, mid - 1, nums);
            }
            else
            {
                cout << "Nhi Ye wala return kiya" << mid << endl;
                return nums[mid];
            }
        }
        return nums[mid];
    }

    int singleNonDuplicate(vector<int> &nums)
    {
        int n = nums.size();

        return single(0, n - 1, nums);
    }
};