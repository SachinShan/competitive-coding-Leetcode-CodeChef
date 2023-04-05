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
        int aadmi;
        int vote;
        cin >> aadmi >> vote;
        vector<int> voterAge(aadmi);
        for (int i = 0; i < aadmi; i++)
        {
            cin >> voterAge[i];
        }
        sort(voterAge.begin(), voterAge.end());

        int i = 0;
        while (voterAge[i] < vote)
        {
            i++;
        }
        int ans = aadmi - i;
        cout << max(ans, 0) << endl;
    }
    return 0;
}
