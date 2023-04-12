void dfs(int node, vector<int> adj[], vector<int> &visited, stack<int> &st)
{

    visited[node] = 1;

    for (auto i : adj[node])
    {
        if (!visited[i])
        {
            dfs(i, adj, visited, st);
        }
    }
    st.push(node);
}

vector<int> topoSort(int V, vector<int> adj[])
{
    // code here
    stack<int> st;
    vector<int> visited(V, 0);
    for (int i = 0; i < V; i++)
    {
        if (!visited[i])
        {
            dfs(i, adj, visited, st);
        }
    }
    vector<int> ans;
    while (!st.empty())
    {
        ans.push_back(st.top());
        st.pop();
    }

    return ans;
}