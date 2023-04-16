class Solution
{
public:
    int maxDivScore(vector<int> &nums, vector<int> &divisors)
    {
        int n = nums.size();
        int m = divisors.size();
        sort(divisors.begin(), divisors.end());
        int ans = divisors[0];
        // int temp = 0;
        int div = 0;
        for (int i = 0; i < m; i++)
        {
            int temp = 0;
            for (int j = 0; j < n; j++)
            {
                if (nums[j] % divisors[i] == 0)
                {
                    temp++;
                }
            }
            if (temp > div)
            {
                div = temp;
                ans = divisors[i];
            }
        }
        return ans;
    }
};