class Solution
{
public:
    vector<int> findOrder(int numCourses, vector<vector<int>> &prerequisites)
    {

        int n = numCourses;
        vector<int> indegree(n, 0);
        vector<int> adj[n];
        queue<int> q;
        vector<int> topology;

        for (auto i : prerequisites)
        {
            adj[i[1]].push_back(i[0]);
        }

        for (int i = 0; i < n; i++)
        {
            for (auto i : adj[i])
            {
                indegree[i]++;
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (indegree[i] == 0)
            {
                q.push(i);
            }
        }

        while (!q.empty())
        {
            int node = q.front();
            q.pop();
            topology.push_back(node);
            for (auto i : adj[node])
            {
                indegree[i]--;
                if (indegree[i] == 0)
                {
                    q.push(i);
                }
            }
        }
        if (topology.size() == n)
        {
            return topology;
        }
        else
        {
            vector<int> ans;
            return ans;
        }
    }
};