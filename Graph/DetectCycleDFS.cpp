bool dfs(int node, int parent, vector<int> adj[], vector<int> &visited)
{

    visited[node] = 1;
    for (auto adjcntNodes : adj[node])
    {
        if (!visited[adjcntNodes])
        { // Already visited hai !!!
            visited[adjcntNodes] = 1;
            dfs(adjcntNodes, node, adj, visited);
        }
        else if (adjcntNodes != parent) // already visited hai but prev wala node nhi hai
        {                               // iska mtlb dusra wala traversal use node pe aa chuka hai
            return true;                // thus cycle found
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
            if (dfs(i, -1, adj, visited))
            {
                return true;
            }
        }
    }
    return false;
}