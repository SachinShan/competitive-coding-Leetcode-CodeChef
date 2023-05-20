class Solution
{
public:
    double dfs(string a, string b, map<string, vector<pair<string, double>>> &adj, map<string, int> &visited)
    {
        if (adj.find(a) == adj.end())
        {
            return -1;
        }

        if (a == b)
        {
            return 1;
        }
        visited[a]++;
        for (auto g : adj[a])
        {
            if (visited.find(g.first) != visited.end())
            {
                continue;
            }
            else
            {
                double res = dfs(g.first, b, adj, visited);
                if (res != -1)
                {
                    return res * g.second;
                }
            }
        }
        return -1;
    }

    vector<double> calcEquation(vector<vector<string>> &equations, vector<double> &values, vector<vector<string>> &queries)
    {

        int n = equations.size();
        map<string, vector<pair<string, double>>> adj;

        for (int i = 0; i < n; i++)
        {
            string node1 = equations[i][0];
            string node2 = equations[i][1];

            adj[node1].push_back({node2, values[i]});
            adj[node2].push_back({node1, 1 / values[i]});
        }

        vector<double> ans;
        for (auto i : queries)
        {
            map<string, int> visited;
            ans.push_back(dfs(i[0], i[1], adj, visited));
        }

        return ans;
    }
};