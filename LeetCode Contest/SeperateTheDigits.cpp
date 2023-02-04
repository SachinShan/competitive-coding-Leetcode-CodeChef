class Solution
{
public:
    vector<int> separateDigits(vector<int> &nums)
    {
        int n = nums.size();

        vector<int> ans;

        for (int i = n - 1; i >= 0; i--)
        {
            int x = nums[i];

            while (x != 0)
            {
                int a = x % 10;
                ans.insert(ans.begin(), a);
                x = x / 10;
            }
        }
        return ans;
    }
};