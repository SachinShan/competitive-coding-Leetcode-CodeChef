class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        unordered_map<char, int> mapp;
        unordered_map<char, int> mapp1;

        int n = s.length();
        int m = t.length();

        if (n != m)
        {
            return false;
        }

        for (int i = 0; i < n; i++)
        {
            mapp[s[i]]++;
            cout << "s se shi h";
        }

        for (int i = 0; i < m; i++)
        {
            mapp1[t[i]]++;
            cout << "t se shi h";
        }

        for (int i = 0; i < n; i++)
        {
            if (mapp[s[i]] != mapp1[s[i]])
            {
                cout << "yha gdbd hus" << i << " " << mapp[s[i]];
                return false;
            }
        }
        return true;
    }
};