#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n = 8;
        int r = 0, c = 0;
        // vector<vector<string>> ppr(n, vector<string>(n));
        vector<string> ppr;
        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = 0; j < n; j++)
        //     {
        //         string s;
        //         cin >> s;
        //         ppr[i][j] = s;
        //     }
        // }
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            ppr.push_back(s);
        }

        for (int i = 0; i < n; i++)
        {
            string s = ppr[i];
            bool flag = false;
            for (int j = 0; j < s.size(); j++)
            {
                if (s[j] != '.')
                {
                    r = i;
                    c = j;
                    flag = true;
                    break;
                }
            }
            if (flag)
            {
                break;
            }
        }

        string ans = "";
        for (int i = r; i < n; i++)
        {
            string s = ppr[i];
            if (s[c] == '.')
            {
                break;
            }
            ans += s[c];
        }
        cout << ans << endl;
    }
}