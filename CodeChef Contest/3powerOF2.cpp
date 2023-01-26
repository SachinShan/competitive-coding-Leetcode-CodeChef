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
        int n;
        string bin;
        cin >> n;
        cin >> bin;

        if (bin == "1" || bin == "10")
        {
            cout << "NO" << endl;
        }
        else
        {
            int count = 0;
            int flag = 1;
            for (int i = 0; i < bin.length(); i++)
            {
                if (bin[i] == '1')
                {
                    count++;
                }
                if (count > 3)
                {
                    flag = 0;
                    break;
                }
            }
            if (flag)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
