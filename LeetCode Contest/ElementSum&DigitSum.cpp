class Solution
{
public:
    int digitSum(int n)
    {
        int sum = 0;
        while (n != 0)
        {
            sum += n % 10;
            n /= 10;
        }

        return sum;
    }

    int differenceOfSum(vector<int> &nums)
    {
        long long esum = 0, dsum = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            esum += nums[i];

            dsum += digitSum(nums[i]);
        }

        return abs(esum - dsum);
    }
};