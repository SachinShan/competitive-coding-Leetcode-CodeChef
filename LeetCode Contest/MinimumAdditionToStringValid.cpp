class Solution
{
public:
    int addMinimum(string word)
    {
        if (word.size() == 1)
        {
            return 2;
        }
        int n = word.size();
        int ans = 0;

        char st = word[0];
        char en = word[n - 1];
        if (st == 'b')
        {
            ans += 1;
        }
        else if (st == 'c')
        {
            ans += 2;
        }

        if (en == 'a')
        {
            ans += 2;
        }
        else if (en == 'b')
        {
            ans += 1;
        }

        for (int i = 1; i < n; i++)
        {
            char f = word[i - 1];
            char s = word[i];

            if (f == 'a' && s == 'a')
            {
                ans += 2;
            }
            if (f == 'a' && s == 'c')
            {
                ans += 1;
            }
            if (f == 'b' && s == 'a')
            {
                ans += 1;
            }
            if (f == 'b' && s == 'b')
            {
                ans += 2;
            }
            if (f == 'c' && s == 'b')
            {
                ans += 1;
            }
            if (f == 'c' && s == 'c')
            {
                ans += 2;
            }
        }
        return ans;
    }
};