class Solution
{
public:
    vector<long long> findPrefixScore(vector<int> &nums)
    {

        int n = nums.size();
        int mx = nums[0];
        vector<long long> conver(n, 0);
        for (int i = 0; i < n; i++)
        {
            mx = max(mx, nums[i]);
            conver[i] = nums[i] + mx;
            cout << conver[i] << " ";
        }
        vector<long long> ans(n);
        ans[0] = conver[0];
        for (int i = 1; i < n; i++)
        {
            ans[i] = ans[i - 1] + conver[i];
        }

        return ans;
    }
};