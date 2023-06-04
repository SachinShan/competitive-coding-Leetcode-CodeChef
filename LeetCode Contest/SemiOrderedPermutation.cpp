class Solution
{
public:
    int semiOrderedPermutation(vector<int> &nums)
    {
        int n = nums.size();
        int mini = nums[0];
        int maxi = nums[0];
        int minind = 0;
        int maxind = 0;

        for (int i = 0; i < n; i++)
        {
            if (nums[i] < mini)
            {
                mini = nums[i];
                minind = i;
            }
            if (nums[i] > maxi)
            {
                maxi = nums[i];
                maxind = i;
            }
        }

        int res = 0;
        res += (minind - 0);
        res += (n - 1 - maxind);

        if (minind > maxind)
        {
            return res - 1;
        }
        return res;
    }
};