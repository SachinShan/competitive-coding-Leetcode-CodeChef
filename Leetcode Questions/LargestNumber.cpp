class Solution
{
public:
    string largestNumber(vector<int> &nums)
    {
        int add = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            add += nums[i];
            if (nums[i] != 0)
                break;
        }
        if (add == 0)
        {
            return "0";
        }
        string ans = "";
        int n = nums.size();
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                string a = to_string(nums[i]) + to_string(nums[j]);
                string b = to_string(nums[j]) + to_string(nums[i]);

                if (b > a)
                {
                    swap(nums[i], nums[j]);
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            ans += to_string(nums[i]);
        }

        return ans;
    }
};