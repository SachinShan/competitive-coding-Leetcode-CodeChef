#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int m = 0;
        vector<int> pet(n, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> pet[i];
            m = max(m, pet[i]);
        }
        if (n % 2 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            vector<int> flag(m, 0);
            for (int i = 0; i < n; i++)
            {
                flag[pet[i]]++;
            }

            int temp = 1;
            for (int i = 0; i < m; i++)
            {
                if (flag[i] % 2 != 0)
                {
                    temp = 0;
                    break;
                }
            }
            if (temp)
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
