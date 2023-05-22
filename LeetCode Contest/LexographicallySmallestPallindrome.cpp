class Solution
{
public:
    string makeSmallestPalindrome(string s)
    {

        string ans = s;
        int n = s.size();
        for (int i = 0; i < s.length() / 2; i++)
            if (s[i] != s[n - 1 - i])
                ans[i] = ans[n - i - 1] = min(s[i], s[n - i - 1]);

        return ans;
    }
};