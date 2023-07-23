#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> arr;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            arr.push_back(x);
        }

        if (n == 1)
        {
            cout << 1 << endl;
            continue;
        }
        sort(arr.begin(), arr.end());

        int i = 0;
        int ans = 0;

        while (i < n - 1)
        {
            int temp = 1;
            while (abs(arr[i + 1] - arr[i]) <= k)
            {
                temp++;
                i++;
            }
            ans = max(ans, temp);
            i++;
        }
        cout << n - ans << endl;
    }
}