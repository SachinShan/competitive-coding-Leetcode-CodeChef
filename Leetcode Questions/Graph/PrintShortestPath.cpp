public:
vector<int> shortestPath(int V, int m, vector<vector<int>> &edges)
{

    // its a weighted graph
    // and the adjecency list is not given, so we have to create it ..........
    vector<pair<int, int>> adj[V + 1];
    for (auto it : edges)
    {
        adj[it[0]].push_back({it[1], it[2]});
        adj[it[1]].push_back({it[0], it[2]});
    }

    // Code here
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    vector<int> dist(V + 1, 1e9);

    vector<int> parent(V + 1);
    for (int i = 0; i <= V; i++)
    {
        parent[i] = i;
    }

    dist[1] = 0;
    pq.push({0, 1});

    while (!pq.empty())
    {
        auto it = pq.top();
        int node = it.second;
        int dis = it.first;
        pq.pop();

        for (auto i : adj[node])
        {
            int edgeWeight = i.second;
            int adjNode = i.first;

            if (dis + edgeWeight < dist[adjNode])
            {
                dist[adjNode] = dis + edgeWeight;
                pq.push({dis + edgeWeight, adjNode});
                parent[adjNode] = node;
            }
        }
    }

    if (dist[V] == 1e9)
    {
        return {-1};
    }

    vector<int> ans;

    while (parent[V] != V)
    {
        ans.push_back(V);
        V = parent[V];
    }
    ans.push_back(1);
    reverse(ans.begin(), ans.end());
    return ans;
}