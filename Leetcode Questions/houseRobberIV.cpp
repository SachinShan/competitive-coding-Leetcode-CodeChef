class Solution
{
public:
    bool isPossible(int mid, vector<int> &nums, int k)
    {
        int n = nums.size();
        int i = 0;
        while (i < n)
        {
            if (nums[i] <= mid)
            {
                i += 2;
                k--;
            }
            else
            {
                i++;
            }

            if (k == 0)
                return true;
        }
        return false;
    }

    int minCapability(vector<int> &nums, int k)
    {
        int n = nums.size();

        int maxElement = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            maxElement = max(maxElement, nums[i]);
        }

        int ans = maxElement;
        int low = 0;
        int high = maxElement;

        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (isPossible(mid, nums, k))
            {
                ans = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return ans;
    }
};