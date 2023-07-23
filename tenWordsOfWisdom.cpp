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
        vector<pair<int, int>> arr;
        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            arr.push_back({x, y});
        }

        unordered_map<int, bool> mapp;
        int ans = 0, temp = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i].first <= 10)
            {
                mapp[i] = true;
                if (arr[i].second > temp)
                {
                    temp = arr[i].second;
                    ans = i + 1;
                }
            }
        }
        cout << ans << endl;
    }
}