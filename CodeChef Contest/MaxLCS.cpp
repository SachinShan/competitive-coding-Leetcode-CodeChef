#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int func(string word1, string word2)
{
    int n = word1.size();
    int m = word2.size();
    vector<int> pichh(m + 1, 0);
    vector<int> abhi(m + 1, 0);
    for (int i = 0; i <= m; i++)
    {
        pichh[i] = 0;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (word1[i - 1] == word2[j - 1])
            {
                abhi[j] = 1 + pichh[j - 1];
            }
            else
            {
                abhi[j] = max(pichh[j], abhi[j - 1]);
            }
        }
        pichh = abhi;
    }
    return pichh[m] / 2;
}
int main()
{

    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        string asldkj;
        cin >> asldkj;

        string hk = asldkj;
        string ij = asldkj;
        reverse(ij.begin(), ij.end());

        int answer = func(hk, ij);

        cout << answer << endl;
    }

    return 0;
}