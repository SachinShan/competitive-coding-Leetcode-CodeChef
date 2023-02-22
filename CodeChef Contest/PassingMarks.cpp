#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    // your code goes here
    int lel;
    cin >> lel;
    while (lel--)
    {
        int sblog, passwale;
        cin >> sblog >> passwale;
        vector<int> arr;

        for (int i = 0; i < sblog; i++)
        {
            int x;
            cin >> x;
            arr.push_back(x);
        }

        sort(arr.begin(), arr.end());

        cout << arr[sblog - passwale] - 1 << endl;
    }
    return 0;
}
