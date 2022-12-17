

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int y;
    cin >> y;
    while (y--)
    {
        int n, k;
        map<int, int> isdhri;
        cin >> n >> k;
        int a[n], b[n];
        
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            isdhri[a[i]] = INT_MAX;
        }
        for (int i = 0; i < n; i++)
            cin >> b[i];
        if (isdhri.size() < k)
        {
            cout << -1 << endl;
            continue;
        }

        for (int i = 0; i < n; i++)
            isdhri[a[i]] = min(b[i], isdhri[a[i]]);
        vector<int> uttar;
        for (auto i : isdhri)
            uttar.push_back(i.second);
        sort(uttar.begin(), uttar.end());
        long long cigrete = 0;
        for (int i = 0; i < k; i++)
            cigrete += uttar[i];
            cout << cigrete << endl;
        
    }
    return 0;
}