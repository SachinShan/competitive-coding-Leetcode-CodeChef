class Solution
{
public:
    vector<int> leftRigthDifference(vector<int> &nums)
    {

        int n = nums.size();
        vector<int> uttar(n);
        int left = 0, right = 0;
        for (int i = 0; i < n; i++)
        {
            right += nums[i];
        }

        for (int i = 0; i < n; i++)
        {
            right -= nums[i];

            uttar[i] = abs(right - left);

            left += nums[i];
        }

        return uttar;
    }
};