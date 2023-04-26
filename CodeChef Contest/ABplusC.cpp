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
        long long xx;
        cin >> xx;
        if (xx == 1)
        {
            cout << -1 << endl;
        }
        else if (xx <= 1000000)
        {
            cout << 1 << " " << 1 << " " << xx - 1 << endl;
        }
        else
        {
            if (xx % 1000000 == 0)
            {
                cout << (xx / 1000000) - 1 << " " << 1000000 << " " << 1000000 << endl;
            }
            else
            {
                cout << 1000000 << " " << xx / 1000000 << " " << xx % 1000000 << endl;
            }
        }
    }
    return 0;
}
