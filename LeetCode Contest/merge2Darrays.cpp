class Solution
{
public:
    vector<vector<int>> mergeArrays(vector<vector<int>> &nums1, vector<vector<int>> &nums2)
    {
        unordered_map<int, int> mapp;
        vector<vector<int>> ans;

        for (int i = 0; i < nums1.size(); i++)
        {
            mapp[nums1[i][0]] += nums1[i][1];
        }
        for (int i = 0; i < nums2.size(); i++)
        {
            mapp[nums2[i][0]] += nums2[i][1];
        }

        for (auto i : mapp)
        {
            vector<int> temp;
            temp.push_back(i.first);
            temp.push_back(i.second);

            ans.push_back(temp);
        }

        sort(ans.begin(), ans.end());
        return ans;
    }
};