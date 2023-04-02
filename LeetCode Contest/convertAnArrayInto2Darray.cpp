class Solution
{
public:
    vector<vector<int>> findMatrix(vector<int> &nums)
    {
        int n = nums.size();
        vector<vector<int>> ans;
        unordered_map<int, bool> index;

        int flag = 0;
        while (flag != n)
        {
            vector<int> temp;
            unordered_map<int, bool> val;
            for (int i = 0; i < n; i++)
            {
                if (!index[i])
                {
                    if (!val[nums[i]])
                    {
                        temp.push_back(nums[i]);
                        flag++;
                        index[i] = true;
                        val[nums[i]] = true;
                    }
                }
            }
            ans.push_back(temp);
        }
        return ans;
    }
};