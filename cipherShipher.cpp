#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        // abacabac

        string ans = "";
        char temp;

        for (int i = 0; i < n; i++)
        {
            temp = s[i];
            // cout << i << " ";
            ans += temp;
            while (i < n)
            {
                // cout << "ye nhi chal rha kyy" << endl;
                i++;
                if (s[i] == temp)
                {
                    break;
                }
            }
        }

        cout << ans << endl;
    }
}