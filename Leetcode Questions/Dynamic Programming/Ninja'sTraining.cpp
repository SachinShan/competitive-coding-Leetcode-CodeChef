// Recursion
int solve(int ind, int prev, vector<vector<int>> &points)
{
    if (ind == 0)
    {
        int maxi = 0;
        for (int i = 0; i < 3; i++)
        {
            if (i != prev)
            {
                maxi = max(maxi, points[0][i]);
            }
        }
        return maxi;
    }
    int maxi = 0;
    for (int i = 0; i < 3; i++)
    {
        if (i != prev)
        {
            int p = points[ind][i] + solve(ind - 1, i, points);
            maxi = max(maxi, p);
        }
    }
    return maxi;
}

int ninjaTraining(int n, vector<vector<int>> &points)
{
    // Write your code here.
    int ans = 0;
    ans = solve(n - 1, 3, points);
    return ans;
}

//  Memoization

int solve(int ind, int prev, vector<vector<int>> &points, vector<vector<int>> &dp)
{
    if (ind == 0)
    {
        int maxi = 0;
        for (int i = 0; i < 3; i++)
        {
            if (i != prev)
            {
                maxi = max(maxi, points[0][i]);
            }
        }
        return maxi;
    }
    if (dp[ind][prev] != -1)
    {
        return dp[ind][prev];
    }
    int maxi = 0;
    for (int i = 0; i < 3; i++)
    {
        if (i != prev)
        {
            int p = points[ind][i] + solve(ind - 1, i, points, dp);
            maxi = max(maxi, p);
        }
    }
    return dp[ind][prev] = maxi;
}

int ninjaTraining(int n, vector<vector<int>> &points)
{
    // Write your code here.
    vector<vector<int>> dp(n, vector<int>(4, -1));

    int ans = 0;
    ans = solve(n - 1, 3, points, dp);
    return ans;
}
