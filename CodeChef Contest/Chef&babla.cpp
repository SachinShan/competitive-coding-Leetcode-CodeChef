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
        vector<int> arr;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            arr.push_back(a);
        }

        sort(arr.begin(), arr.end());

        if (arr[0] > 0)
        {
            cout << arr[0] - 1 << endl;
        }
        else if (arr[n - 1] == 0)
        {
            cout << arr[n - 2] << endl;
        }
        else
        {
            for (int i = 0; i < n - 2; i++)
            {
                if (arr[i] <= 0 && arr[i + 1] > 0)
                {
                    int check = -1 * arr[i];
                    cout << min(check, arr[i + 1]) - 1 << endl;
                }
            }
        }
    }
    return 0;
}
