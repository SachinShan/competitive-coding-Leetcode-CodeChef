
#include <bits/stdc++.h>
using namespace std;

int ans(vector<string> &words)
{

    int n = words.size();
    vector<int> vis(n, 1);
    int cnt = 0;

    for (int i = 0; i < n - 1; i++)
    {
        string a = words[i];
        reverse(a.begin(), a.end());

        for (int j = i + 1; j < n; j++)
        {
            if (vis[j])
            {
                if (words[j] == a)
                {
                    cnt++;
                }
            }
        }
    }
    return cnt;
}

int main()
{
    vector<string> words;
    words.push_back("ab");
    words.push_back("cd");
    words.push_back("ba");
    words.push_back("hn");
    words.push_back("dc");

    cout << ans(words) << endl;
}
