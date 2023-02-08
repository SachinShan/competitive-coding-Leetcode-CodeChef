#include <iostream>
#include <unordered_map>
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
        string s;
        cin >> s;
        unordered_map<char, int> mapp;

        for (int i = 0; i < n; i++)
        {
            mapp[s[i]]++;
        }

        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            if (mapp[s[i]] > 1)
            {
                flag = 1;
                break;
            }
        }

        if (flag)
        {
            cout << n - 2 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}
