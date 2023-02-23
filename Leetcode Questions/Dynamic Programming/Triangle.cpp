class Solution
{
public:
    int solve(int row, int col, vector<vector<int>> &triangle, vector<vector<int>> &dp)
    {
        if (row == triangle.size())
        {
            return dp[row][col] = 0;
        }

        if (dp[row][col] != -1)
        {
            return dp[row][col];
        }

        return dp[row][col] = triangle[row][col] + min(solve(row + 1, col, triangle, dp), solve(row + 1, col + 1, triangle, dp));
    }

    int minimumTotal(vector<vector<int>> &triangle)
    {

        int n = triangle.size();
        vector<vector<int>> dp(n + 1, vector<int>(n + 1, -1));

        return solve(0, 0, triangle, dp);
    }
};