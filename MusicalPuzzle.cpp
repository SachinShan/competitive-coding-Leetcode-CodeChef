#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int siz;
        cin >> siz;
        string melody;
        cin >> melody;
        unordered_map<string, int> mapp;

        for (int i = 1; i < siz; i++)
        {
            char x = melody[i - 1];
            char y = melody[i];

            string s = to_string(x) + to_string(y);
            mapp[s]++;
        }

        cout << mapp.size() << endl;
    }
}
