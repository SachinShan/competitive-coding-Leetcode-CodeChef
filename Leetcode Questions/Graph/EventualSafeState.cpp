class Solution
{
public:
    bool dfs(int node, vector<vector<int>> &adj, vector<int> &visited, vector<int> &path)
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

    vector<int> eventualSafeNodes(vector<vector<int>> &graph)
    {
        int V = graph.size();
        vector<int> visited(V, 0);
        vector<int> path(V, 0);

        for (int i = 0; i < V; i++)
        {
            if (!visited[i])
            {
                // if(dfs(i, adj, visited, path)){
                //     return true;
                // }
                dfs(i, graph, visited, path);
            }
        }

        vector<int> ans;
        for (int i = 0; i < V; i++)
        {
            if (!path[i])
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};