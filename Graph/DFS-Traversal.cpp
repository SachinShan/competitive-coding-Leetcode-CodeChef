#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printList(vector<vector<int>> &adj, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << i << "- ";
        for (auto j : adj[i])
        {
            cout << "->" << j;
        }
        cout << endl;
    }
}

void dfs(vector<vector<int>> &adj, int node, vector<int> &ans, vector<int> &visited)
{
    visited[node] = 1;
    ans.push_back(node);

    // traversing all the neighbours of the current node
    for (auto i : adj[node])
    {
        cout << i << " ";
    }
    cout << endl;
    for (auto i : adj[node])
    {
        // cout << i << " yahi call ho rha" << endl;
        if (!visited[i])
        {
            // visited[i] = true;
            dfs(adj, node, ans, visited);
        }
    }
}

int main()
{
    int n, m;
    cout << "Enter the size of the matrix(n X m): ";
    cout << "Here n is the number of nodes & m is the number of Edges";
    cin >> n >> m;

    vector<vector<int>> adj(n + 1);
    vector<int> visited(n + 1, 0);

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    printList(adj, n + 1);

    vector<int> ans; // vector to store the ans(dfs traversal)

    dfs(adj, 1, ans, visited);

    cout << "DFS Traversal of the given Graph is: ";
    for (auto i : ans)
    {
        cout << i << " ";
    }
}
