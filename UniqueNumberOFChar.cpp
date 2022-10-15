#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int freq[26];

void unique(string st)
{
    // int n = st.size();
    if (st.size() == 0)
    {
        return;
    }
    freq[st[0] - 'a']++;
    unique(st.substr(1));
}

int main()
{
    string st;
    int count = 0;
    cin >> st;

    for (int i = 0; i < 26; i++)
    {
        freq[i] = 0;
    }

    unique(st);

    sort(freq, freq + 26, greater<int>());

    for (int i = 0; i < 25; i++)
    {
        if (freq[i] == 0)
        {
            continue;
        }
        for (int j = i + 1; j < 26; j++)
        {
            if (freq[i] == freq[j])
            {
                count++;
                freq[j]--;
            }
        }
    }

    cout << count;
}