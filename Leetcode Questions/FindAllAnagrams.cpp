class Solution
{
public:
    unordered_map<char, bool> mapp;
    bool isValid(string s1)
    {
        for (int i = 0; i < s1.length(); i++)
        {
            if (mapp[s1[i]] == false)
            {
                return false;
            }
        }
        return true;
    }

    vector<int> findAnagrams(string s, string p)
    {

        int n = s.length();
        int m = p.length();
        cout << n << "N" << endl;

        int check = 0;
        for (int i = 0; i < m; i++)
        {
            check += int(p[i]);
            cout << int(p[i]) << " ";

            mapp[p[i]] = true;
        }
        cout << endl;
        vector<int> ans;

        for (int i = 0; i <= n - m; i++)
        {
            int temp = 0;
            string s1 = "";
            for (int j = i; j < i + m; j++)
            {
                temp += int(s[j]);
                s1 += s[j];
                cout << int(s[j]) << " ";
            }
            cout << endl;
            if (temp == check && isValid(s1))
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};