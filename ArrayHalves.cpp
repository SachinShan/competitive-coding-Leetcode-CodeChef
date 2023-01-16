#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int po;
        cin >> po;
        vector<int> pahila;
        vector<int> dusra;
        for (int i = 0; i < 2 * po; i++)
        {
            int a;
            cin >> a;
            pahila.push_back(a);
            dusra.push_back(a);
        }
        sort(dusra.begin(), dusra.end());
        int s = dusra[po - 1];
        int pind = po;
        long tisra = 0;
        for (int i = 0; i < pind; i++)
        {
            if (pahila[i] > s)
            {
                tisra += pind - i;
                pind++;
            }
        }
        cout << tisra << endl;
    }
    return 0;
}