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
        int siz;
        cin >> siz;

        string sabd;
        cin >> sabd;

        unordered_map<char, bool> mapp;
        // set<char> sett;
        string ans = "";
        for (int i = 0; i < siz; i++)
        {
            if (!mapp[sabd[i]])
            {
                ans += sabd[i];
                mapp[sabd[i]] = true;
            }
        }

        cout << ans << endl;
    }
    return 0;
}
