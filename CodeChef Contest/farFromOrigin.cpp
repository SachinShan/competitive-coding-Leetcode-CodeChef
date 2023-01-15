#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        int d1, d2;

        d1 = sqrt(pow(x1, 2) + pow(y1, 2));
        d2 = sqrt(pow(x2, 2) + pow(y2, 2));

        cout << d1 << " " << d2 << " " << endl;

        if (d1 > d2)
        {
            cout << "ALEX" << endl;
        }
        else if (d1 < d2)
        {
            cout << "BOB" << endl;
        }
        else
        {
            cout << "EQUAL" << endl;
        }
    }
    return 0;
}
