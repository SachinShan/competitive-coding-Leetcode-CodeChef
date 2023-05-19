
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, faltu;
        cin >> n >> faltu;

        vector<int> degree(n, 0);
        vector<int> cop(n, 0);

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            degree[i] = x;
            cop[i] = x;
        }

        vector<int> prob(n, 0);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            prob[i] = x;
        }

        sort(degree.begin(), degree.end());
        sort(prob.begin(), prob.end());

        unordered_map<int, vector<int>> mapp;
        for (int i = 0; i < n; i++)
        {
            mapp[degree[i]].push_back(prob[i]);
        }

        for (int i = 0; i < n; i++)
        {
            int x = cop[i];
            cop[i] = mapp[x][mapp[x].size() - 1];
            mapp[x].pop_back();
        }

        for (int i = 0; i < n; i++)
        {
            cout << cop[i] << " ";
        }
    }
    cout << endl;
}