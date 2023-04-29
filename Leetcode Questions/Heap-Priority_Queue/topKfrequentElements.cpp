class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        int n = nums.size();
        unordered_map<int, int> mapp;
        for (int i = 0; i < n; i++)
        {
            mapp[nums[i]]++;
        }

        priority_queue<pair<int, int>> pq;
        for (auto i : mapp)
        {
            int ind = i.first;
            int cnt = i.second;

            pq.push({cnt, ind});
        }
        vector<int> ans;

        while (k--)
        {
            int temp = pq.top().second;
            ans.push_back(temp);
            pq.pop();
        }
        return ans;
    }
};