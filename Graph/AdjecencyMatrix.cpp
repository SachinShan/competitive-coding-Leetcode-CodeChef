#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter the size of the matrix(n X m): ";
    cin >> n >> m;

    vector<vector<int>> adj(n, vector<int>(n, 0));
    // cout << "size" << adj.size() << endl;

    for (int i = 0; i < m; i++)
    {
        cout << "I is " << i << endl;
        int u, v;
        cin >> u >> v;

        adj[u][v] = 1;
        adj[v][u] = 1;
    }
}
