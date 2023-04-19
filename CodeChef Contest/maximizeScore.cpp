#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        // int game[n];
        vector<int> game(n);

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            game[i] = x;
        }

        int res = abs(game[0] - game[1]);

        for (int i = 1; i < n - 1; i++)
        {
            res = min(res, max(abs(game[i] - game[i + 1]), abs(game[i] - game[i - 1])));
        }

        res = min(abs(game[n - 1] - game[n - 2]), res);

        cout << res << endl;
    }
    return 0;
}