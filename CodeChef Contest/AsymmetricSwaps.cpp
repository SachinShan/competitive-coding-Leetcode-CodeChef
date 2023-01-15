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
        int n;
        cin >> n;
        int arr1[n];
        int arr2[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> arr2[i];
        }

        vector<int> bda;
        for (int i = 0; i < n; i++)
        {
            bda.push_back(arr1[i]);
        }
        for (int i = 0; i < n; i++)
        {
            bda.push_back(arr2[i]);
        }
        sort(bda.begin(), bda.end());

        int x = bda[(2 * n) - 1] - bda[n];
        int y = bda[n - 1] - bda[0];

        if (x <= y)
        {
            cout << x << endl;
        }
        else
        {
            cout << y << endl;
        }
    }
    return 0;
}
