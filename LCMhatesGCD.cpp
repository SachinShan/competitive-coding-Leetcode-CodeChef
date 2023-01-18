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
        int n, m;
        cin >> n >> m;

        if (n == m)
        {
            cout << 0 << endl;
        }
        else
        {
            int g = __gcd(n, m);
            int l = lcm(n, g);
            int h = __gcd(m, g);
            cout << l - h << endl;
        }
    }
    return 0;
}
