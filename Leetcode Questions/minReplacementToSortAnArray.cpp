class Solution
{
public:
    long long minimumReplacement(vector<int> &nums)
    {
        int n = nums.size();
        long long res = 0;
        int i = n - 2;
        while (i >= 0)
        {
            if (nums[i] > nums[i + 1])
            {
                long long temp = 0;
                if (nums[i] % nums[i + 1] == 0)
                {
                    temp = nums[i] / nums[i + 1];
                }
                else
                {
                    temp = nums[i] / nums[i + 1] + 1;
                }
                res += temp - 1;

                nums[i] = nums[i] / temp;
            }
            i--;
        }
        return res;
    }
};