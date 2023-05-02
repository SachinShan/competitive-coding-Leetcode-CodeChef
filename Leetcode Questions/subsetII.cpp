class Solution
{
public:
    set<vector<int>> ans;
    void solve(vector<int> nums, int index, vector<int> output)
    {
        // base case
        if (index >= nums.size())
        {
            // ans.push_back(output);
            sort(output.begin(), output.end());
            ans.insert(output);
            return;
        }
        else
        {
            // exclude krna hai
            solve(nums, index + 1, output);
            int element = nums[index];
            output.push_back(element);
            solve(nums, index + 1, output);
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int> &nums)
    {

        vector<int> output;
        int index = 0;
        solve(nums, index, output);
        vector<vector<int>> res(ans.begin(), ans.end());

        return res;
    }
};
