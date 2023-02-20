Space Optimised

    class Solution
{
public:
    int fib(int n)
    {
        if (n == 0 || n == 1)
        {
            return n;
        }

        int prev2 = 0;
        int prev1 = 1;
        int curr;
        for (int i = 2; i <= n; i++)
        {
            curr = prev2 + prev1;
            prev2 = prev1;
            prev1 = curr;
        }
        return curr;
    }
};

Tabulation Method

    class Solution
{
public:
    int fib(int n)
    {
        if (n == 0 || n == 1)
        {
            return n;
        }
        vector<int> dp(n + 1, -1);
        dp[0] = 0;
        dp[1] = 1;

        for (int i = 2; i <= n; i++)
        {
            dp[i] = dp[i - 1] + dp[i - 2];
        }
        return dp[n];
    }
};

Memoization Method

    class Solution
{
public:
    int solve(int n, vector<int> &dp)
    {
        if (n == 0 || n == 1)
        {
            return n;
        }
        if (dp[n] != -1)
        {
            return dp[n];
        }

        return dp[n] = solve(n - 1, dp) + solve(n - 2, dp);
    }

    int fib(int n)
    {
        vector<int> dp(n + 1, -1);
        return solve(n, dp);
    }
};

Recursion Method

    class Solution
{
public:
    int fib(int n)
    {
        if (n == 0 || n == 1)
        {
            return n;
        }
        return fib(n - 1) + fib(n - 2);
    }
};