class Solution
{
public:
    vector<int> getOrder(vector<vector<int>> &tasks)
    {
        using threeInp = pair<int, pair<int, int>>;
        vector<threeInp> arr;
        int n = tasks.size();
        for (int i = 0; i < n; ++i)
        {
            arr.push_back({tasks[i][0], {tasks[i][1], i}});
        }
        sort(arr.begin(), arr.end());
        priority_queue<threeInp, vector<threeInp>, greater<threeInp>> minHeap;
        vector<int> ans;
        int i = 0;
        long long realTime = arr[i].first;
        while (i < n || !minHeap.empty())
        {
            while (i < n && realTime >= arr[i].first)
            {
                minHeap.push({arr[i].second.first, {arr[i].second.second, arr[i].first}});
                ++i;
            }
            realTime = realTime += minHeap.top().first;
            ans.push_back(minHeap.top().second.first);
            minHeap.pop();
            if (i < n && realTime < arr[i].first && minHeap.empty())
                realTime = arr[i].first;
        }
        return ans;
    }
};