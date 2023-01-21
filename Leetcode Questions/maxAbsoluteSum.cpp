class Solution
{
public:
    int maxSubarraySumCircular(vector<int> &nums)
    {
        int maxi = INT_MIN;
        int temp = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            temp += nums[i];
            maxi = max(maxi, temp);

            if (temp < 0)
            {
                temp = 0;
            }
        }

        temp = 0;
        int mini = INT_MAX;
        for (int i = 0; i < nums.size(); i++)
        {
            temp += nums[i];
            mini = min(temp, mini);

            if (temp > 0)
            {
                temp = 0;
            }
        }
        int sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
        }

        if (sum == mini)
        {
            return maxi;
        }
        else
        {
            return max(maxi, (sum - mini));
        }
    }
};