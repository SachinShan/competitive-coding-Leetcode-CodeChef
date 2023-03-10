// Memoization
class Solution
{
public:
    int lcs(int i, int j, string &t1, string &t2, vector<vector<int>> &dp)
    {
        if (i < 0 || j < 0)
        {
            return 0;
        }

        if (dp[i][j] != -1)
        {
            return dp[i][j];
        }

        if (t1[i] == t2[j])
        {
            dp[i][j] = 1 + lcs(i - 1, j - 1, t1, t2, dp);
            return dp[i][j];
        }

        dp[i][j] = max(lcs(i - 1, j, t1, t2, dp), lcs(i, j - 1, t1, t2, dp));
        return dp[i][j];
    }

    int longestCommonSubsequence(string text1, string text2)
    {
        int n = text1.size();
        int m = text2.size();

        vector<vector<int>> dp(n, vector<int>(m, -1));

        return lcs(n - 1, m - 1, text1, text2, dp);
    }
};

// tabulation

class Solution
{
public:
    int longestCommonSubsequence(string t1, string t2)
    {
        int n = t1.length();
        int m = t2.length();

        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
        for (int j = 0; j <= m; j++)
            dp[0][j] = 0;
        for (int i = 0; i <= n; i++)
            dp[i][0] = 0;

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (t1[i - 1] == t2[j - 1])
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                else
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
        return dp[n][m];
    }
};