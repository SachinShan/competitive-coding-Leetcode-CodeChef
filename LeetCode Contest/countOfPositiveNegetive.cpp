class Solution
{
public:
    int maximumCount(vector<int> &nums)
    {
        int palas = 0, mainas = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] < 0)
            {
                mainas++;
            }
            if (nums[i] > 0)
            {
                palas++;
            }
        }
        return max(palas, mainas);
    }
};