class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        int n = nums.size();
        vector<vector<int>> temp;
        set<vector<int>> s;
        sort(nums.begin(), nums.end());

        for (int k = 0; k < n - 2; k++)
        {
            int i = k + 1, j = n - 1;
            while (i != j)
            {
                // if(nums[k] == nums[i]){
                //     i++;
                // }
                // if(nums[k] == nums[j]){
                //     j--;
                // }
                int sum = nums[i] + nums[j] + nums[k];
                if (sum == 0)
                {

                    s.insert({nums[k], nums[i], nums[j]});
                }

                if (sum > 0)
                {
                    j--;
                }
                else
                {
                    i++;
                }
            }
        }
        for (auto i : s)
        {
            temp.push_back(i);
        }

        return temp;
    }
};
