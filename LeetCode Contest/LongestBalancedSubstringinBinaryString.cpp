class Solution
{
public:
    int findTheLongestBalancedSubstring(string s)
    {
        int n = s.length();
        int z = 0, one = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                z++;
            }
            else
            {
                one++;
            }
        }

        if (z == 0 && one == 0)
        {
            return 1;
        }
        if (z == 0 || one == 0)
        {
            return 0;
        }
        int res = 0;
        for (int i = 1; i < n; i++)
        {
            int l = i - 1;
            int r = i;
            int ans = 0;
            if (s[l] == '0' && s[r] == '1')
            {
                while (l >= 0 && r < n && s[l] == '0' && s[r] == '1')
                {
                    ans++;
                    l--;
                    r++;
                }
            }

            res = max(ans, res);
        }

        return res * 2;
    }
};
