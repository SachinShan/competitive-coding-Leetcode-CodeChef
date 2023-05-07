class Solution
{
public:
    vector<int> distinctDifferenceArray(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> ans;

        for (int i = 0; i < n; i++)
        {
            unordered_map<int, bool> mapp;
            unordered_map<int, bool> mappp;
            int val = nums[i];
            int pref = 0;
            int suff = 0;
            for (int j = 0; j <= i; j++)
            {
                if (!mapp[nums[j]])
                {
                    mapp[nums[j]] = true;
                    pref++;
                }
            }
            for (int k = i + 1; k < n; k++)
            {
                if (!mappp[nums[k]])
                {
                    mappp[nums[k]] = true;
                    suff++;
                }
            }
            // cout<<pref<<" "<<suff<<endl;
            ans.push_back(pref - suff);
        }
        return ans;
    }
};