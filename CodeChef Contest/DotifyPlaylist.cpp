#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

bool descendingComparator(int a, int b)
{
    return a > b;
}

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, l;
        cin >> n >> k >> l;
        vector<vector<int>> song(n, vector<int>(2));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                int x;
                cin >> x;
                song[i][j] = x;
            }
        }

        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            int lang = song[i][1];
            if (lang == l)
            {
                ans.push_back(song[i][0]);
            }
        }
        sort(ans.begin(), ans.end(), descendingComparator);
        // for(int i=0; i<ans.size(); i++){
        //     cout<<ans[i]<<" ";
        // }
        int res = 0;
        if (ans.size() < k)
        {
            cout << -1 << endl;
        }
        else
        {

            for (int i = 0; i < k; i++)
            {
                res += ans[i];
            }
            cout << res << endl;
        }
    }
    return 0;
}
