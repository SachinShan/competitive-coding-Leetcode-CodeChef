class Solution
{
public:
    void dfs(int node, vector<vector<int>> &adj, vector<int> &visited)
    {

        visited[node] = 1;

        for (auto i : adj[node])
        {
            if (!visited[i])
            {
                dfs(i, adj, visited);
            }
        }
    }

    int findCircleNum(vector<vector<int>> &isConnected)
    {
        int n = isConnected.size();

        // Converting adjency matrix into adjency list
        vector<vector<int>> adj(n + 1);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (isConnected[i][j] == 1 && i != j)
                {
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }

        vector<int> visited(n + 1, 0);
        int cnt = 0;

        for (int i = 0; i < n; i++)
        {
            if (!visited[i])
            {
                cnt++;
                dfs(i, adj, visited);
            }
        }
        return cnt;
    }
};