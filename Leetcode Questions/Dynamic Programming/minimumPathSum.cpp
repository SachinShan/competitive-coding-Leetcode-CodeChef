class Solution
{
public:
    long long int solve(int x, int y, int n, int m, vector<vector<int>> &grid, vector<vector<int>> &dp)
    {
        if (x == n - 1 && y == m - 1)
        {
            return grid[x][y];
        }

        if (x >= n || y >= m)
        {
            return INT_MAX;
        }

        if (dp[x][y] != -1)
        {
            return dp[x][y];
        }

        long long int down = grid[x][y] + solve(x + 1, y, n, m, grid, dp);
        long long int right = grid[x][y] + solve(x, y + 1, n, m, grid, dp);

        return dp[x][y] = min(down, right);
    }

    int minPathSum(vector<vector<int>> &grid)
    {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> dp(n, vector<int>(m, -1));

        return solve(0, 0, n, m, grid, dp);
    }
};