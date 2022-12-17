#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int e;
    cin >> e;
    while (e--)
    {
        int n;
        cin >> n;
        string zdkio;
        cin >> zdkio;
        int z;
        int ndivhe = 1;
        for (z = 1; z < 2 * n; z++)
        if (zdkio[z] != zdkio[0])
        {
            ndivhe = 0;
            break;
        }
        if (!ndivhe)
        {
            cout << 1 << " ";
            int m = n - 1;
            int i = 2;
            while (m)
            {
                if (i == z + 1)
                    m++;
                else
                    cout << i << " ";

                i++;
                m--;
            }
        }
        else
            cout << -1;
        cout << "\n";
    }
    return 0;
}