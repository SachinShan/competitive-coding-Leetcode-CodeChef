class Solution
{
public:
    bool isvowel(char a)
    {
        if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
        {
            return true;
        }
        return false;
    }

    int vowelStrings(vector<string> &words, int left, int right)
    {
        int ans = 0;
        for (int i = left; i <= right; i++)
        {
            char a = words[i][0];
            char b = words[i][words[i].size() - 1];
            if (isvowel(a) && isvowel(b))
            {
                ans++;
            }
        }
        return ans;
    }
};