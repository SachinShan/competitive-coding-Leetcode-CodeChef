class Solution
{
public:
    bool dfs(int node, vector<int> adj[], vector<int> &visited, vector<int> &path)
    {

        visited[node] = 1;
        path[node] = 1;

        for (auto i : adj[node])
        {
            if (!visited[i])
            {
                if (dfs(i, adj, visited, path) == true)
                {
                    return true;
                }
            }
            else if (path[i] == 1)
            {
                return true;
            }
        }

        path[node] = 0;
        return false;
    }

    bool canFinish(int numCourses, vector<vector<int>> &prerequisites)
    {
        int V = numCourses;
        vector<int> visited(V, 0);
        vector<int> path(V, 0);
        vector<int> adj[V];
        for (auto x : prerequisites)
        {
            vector<int> data = x;
            int a = data[0];
            int b = data[1];
            adj[a].push_back(b);
        }
        for (int i = 0; i < V; i++)
        {
            if (!visited[i])
            {
                if (dfs(i, adj, visited, path))
                {
                    return false;
                }
            }
        }
        return true;
    }
};