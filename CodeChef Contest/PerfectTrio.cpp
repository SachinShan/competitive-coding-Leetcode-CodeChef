#include <iostream>
#include <vector>

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        vector<int> age(3, 0);
        age[0] = x;
        age[1] = y;
        age[2] = z;
        sort(age.begin(), age.end());

        if (age[0] + age[1] == age[2])
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
