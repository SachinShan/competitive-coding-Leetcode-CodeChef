#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, ek = 0, ped = 0, crax = 0, j = 0;
        cin >> n;
        string s;
        cin >> s;
        while (j < n && s[j] == '1')
        {
            j++;
            ped++;
        }
        for (int i = j; i < n; i++)
        {
            if (s[i] == '1')
            {
                ek++;
            }
            else
            {
                crax = max(crax, ek);
                ek = 0;
            }
        }
        crax = max(crax, ek);
        cout << crax + ped << endl;
    }
    return 0;
}