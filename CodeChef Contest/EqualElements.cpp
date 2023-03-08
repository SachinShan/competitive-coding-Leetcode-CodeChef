#include <iostream>
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
        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            arr[i] = x;
        }
        sort(arr.begin(), arr.end());
        int count = 0;
        for (int i = 0; i < n - 1; i++)
        {
            int temp = 1;
            while (arr[i] == arr[i + 1])
            {
                temp++;
                i++;
            }
            count = max(count, temp);
        }

        cout << (n - count) << endl;
    }
    return 0;
}
