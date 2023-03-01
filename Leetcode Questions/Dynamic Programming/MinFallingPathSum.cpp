// Memoization

class Solution
{
public:
    int solve(int row, int col, int n, vector<vector<int>> &matrix, vector<vector<int>> &dp)
    {

        if (col < 0 || col >= n)
        {
            return INT_MAX;
        }
        if (row == 0)
        {
            return dp[row][col] = matrix[row][col];
        }

        if (dp[row][col] != -1)
        {
            return dp[row][col];
        }

        int left = solve(row - 1, col - 1, n, matrix, dp);
        int down = solve(row - 1, col, n, matrix, dp);
        int right = solve(row - 1, col + 1, n, matrix, dp);

        return dp[row][col] = matrix[row][col] + min(left, min(down, right));
    }

    int minFallingPathSum(vector<vector<int>> &matrix)
    {
        int n = matrix.size();
        int ans = INT_MAX;
        vector<vector<int>> dp(n, vector<int>(n, -1));

        for (int i = 0; i < n; i++)
        {
            int x = solve(n - 1, i, n, matrix, dp);
            ans = min(ans, x);
        }
        return ans;
    }
};

// Recursion

class Solution
{
public:
    int solve(int row, int col, int n, vector<vector<int>> &matrix)
    {

        if (col < 0 || col >= n)
        {
            return INT_MAX;
        }
        if (row == n - 1)
        {
            return matrix[row][col];
        }

        int left = solve(row + 1, col - 1, n, matrix);
        int down = solve(row + 1, col, n, matrix);
        int right = solve(row + 1, col + 1, n, matrix);

        return matrix[row][col] + min(left, min(down, right));
    }

    int minFallingPathSum(vector<vector<int>> &matrix)
    {
        int n = matrix.size();
        int ans = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int x = solve(0, i, n, matrix);
            ans = min(ans, x);
        }
        return ans;
    }
};