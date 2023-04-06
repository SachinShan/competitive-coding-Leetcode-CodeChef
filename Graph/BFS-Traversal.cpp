#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

void printList(vector<vector<int>> &adj, int n)
{
    for (int i = 1; i < n; i++)
    {
        cout << i << "- ";
        for (auto j : adj[i])
        {
            cout << "->" << j;
        }
        cout << endl;
    }
}

void bfsTraversal(vector<vector<int>> &adj)
{
    int n = adj.size();
    queue<int> q;
    vector<bool> visited(n + 1, false);
    vector<int> bfs;

    q.push(1);
    visited[1] = true;

    while (!q.empty())
    {
        int x = q.front();
        bfs.push_back(x);
        q.pop();
        for (auto i : adj[x])
        {
            if (visited[i] == false)
            {
                q.push(i);
                visited[i] = true;
            }
        }
    }

    for (auto j : bfs)
    {
        cout << j << " ";
    }
}

int main()
{
    int n, m;
    cout << "Enter the size of the matrix(n X m): ";
    cout << "Here n is the number of nodes & m is the number of Edges";
    cin >> n >> m;

    vector<vector<int>> adj(n + 1);

    for (int i = 0; i < m; i++)
    {

        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    printList(adj, n + 1);

    bfsTraversal(adj);
}
