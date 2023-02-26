// Tabulation

class Solution
{
public:
    int minPathSum(vector<vector<int>> &grid)
    {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> dp(n, vector<int>(m, 0));

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (i == 0 && j == 0)
                {
                    dp[i][j] = grid[i][j];
                }
                else
                {
                    int up = grid[i][j];
                    if (i > 0)
                    {
                        up += dp[i - 1][j];
                    }
                    else
                    {
                        up = INT_MAX;
                    }

                    int left = grid[i][j];
                    if (j > 0)
                    {
                        left += dp[i][j - 1];
                    }
                    else
                    {
                        left = INT_MAX;
                    }
                    dp[i][j] = min(left, up);
                }
            }
        }
        return dp[n - 1][m - 1];
    }
};

// Memoization
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