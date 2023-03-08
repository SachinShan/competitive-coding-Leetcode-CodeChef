#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int days;
        cin >> days;
        vector<int> all(days);
        vector<int> ball(days);

        for (int i = 0; i < days; i++)
        {
            int x;
            cin >> x;
            all[i] = x;
        }
        for (int i = 0; i < days; i++)
        {
            int x;
            cin >> x;
            ball[i] = x;
        }
        vector<int> ans(days, 0);

        for (int i = 0; i < days; i++)
        {
            if (all[i] * 2 < ball[i] || all[i] > ball[i] * 2)
            {
                continue;
            }
            else
            {
                ans[i] = 1;
            }
        }
        int res = 0;
        for (int i = 0; i < days; i++)
        {
            res += ans[i];
        }
        cout << res << endl;
    }
    return 0;
}
