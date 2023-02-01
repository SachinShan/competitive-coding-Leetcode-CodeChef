#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int i, j, k;
        cin >> i >> j >> k;
        int mini = min(i, min(j, k));
        if (mini == i)
        {
            cout << "ALICE" << endl;
        }
        else if (mini == j)
        {
            cout << "BOB" << endl;
        }
        else
        {
            cout << "CHARLIE" << endl;
        }
    }
    return 0;
}
