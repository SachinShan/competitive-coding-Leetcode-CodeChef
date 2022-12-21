#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int asdjf;
    cin >> asdjf;
    while (asdjf--)
    {
        int amai;
        cin >> amai;
        // string kyhei;
        // cin>>kyhei;
        string h;
        cin >> h;
        string kfadjf;
        cin >> kfadjf;

        sort(h.begin(), h.end());
        // sort(kyhei.begin(), kyhei.end());
        sort(kfadjf.begin(), kfadjf.end());
        if (h == kfadjf)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
