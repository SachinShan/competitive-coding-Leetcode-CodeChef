#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

void printList(vector<vector<int>> &adj, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << i << "-->";
        for (auto j : adj[i])
        {
            cout << "->" << j;
        }
        cout << endl;
    }
}

int main()
{
    int n, m;
    cout << "Enter the size of the matrix(n X m): ";
    cin >> n >> m;

    // vector<vector<int>> adj(n, vector<int>(n, 0));
    vector<vector<int>> adj(n);

    for (int i = 0; i < m; i++)
    {
        cout << "I is " << i << endl;
        int u, v;
        cin >> u >> v;

        // adj[u][v] = 1;
        // adj[v][u] = 1;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    printList(adj, n);
}
