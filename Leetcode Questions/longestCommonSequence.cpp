class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {

        // if(nums.size() == 0){
        //     return 0;
        // }
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for (auto i : nums)
        {
            cout << i << " ";
        }

        int ans = 1;
        int res = 1;
        for (int i = 1; i < n; i++)
        {
            if (nums[i] == nums[i - 1])
            {
                continue;
            }
            else if (nums[i] == nums[i - 1] + 1)
            {
                cout << i << endl;
                res++;
            }
            else
            {
                res = 1;
            }
            ans = max(res, ans);
        }

        return ans;
    }
};