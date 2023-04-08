public:
// Function to detect cycle in an undirected graph.
bool bfs(int node, vector<int> adj[], vector<int> &visited)
{

    visited[node] = 1;
    queue<pair<int, int>> q;
    q.push({node, -1});

    while (!q.empty())
    {
        int node = q.front().first;
        int parent = q.front().second;
        q.pop();

        for (auto adjcntNodes : adj[node])
        {
            if (!visited[adjcntNodes])
            { // Already visited hai !!!
                visited[adjcntNodes] = 1;
                q.push({adjcntNodes, node});
            }
            else if (adjcntNodes != parent) // already visited hai but prev wala node nhi hai
            {                               // iska mtlb dusra wala traversal use node pe aa chuka hai
                return true;                // thus cycle found
            }
        }
    }
    return false;
}

bool isCycle(int V, vector<int> adj[])
{
    // Code here
    vector<int> visited(V);

    for (int i = 1; i < V; i++)
    {
        if (!visited[i])
        {
            if (bfs(i, adj, visited))
            {
                return true;
            }
        }
    }
    return false;
}
}
;