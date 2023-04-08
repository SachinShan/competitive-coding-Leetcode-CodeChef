class Solution
{
public:
    void solve(vector<vector<char>> &board)
    {

        vector<vector<char>> grid = board;
        int n = grid.size();
        int m = grid[0].size();
        queue<pair<int, int>> q;
        vector<vector<int>> visited(n, vector<int>(m, 0));

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (i == 0 || i == n - 1 || j == 0 || j == m - 1)
                {
                    if (grid[i][j] == 'O')
                    {
                        q.push({i, j});
                        visited[i][j] = 1;
                    }
                }
            }
        }

        while (!q.empty())
        {
            int r = q.front().first;
            int c = q.front().second;
            q.pop();

            int drow[] = {-1, 0, 1, 0};
            int dcol[] = {0, 1, 0, -1};

            for (int i = 0; i < 4; i++)
            {
                int nrow = r + drow[i];
                int ncol = c + dcol[i];

                if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && visited[nrow][ncol] == 0 && grid[nrow][ncol] == 'O')
                {
                    q.push({nrow, ncol});
                    visited[nrow][ncol] = 1;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j] == 'O' && visited[i][j] == 0)
                {
                    board[i][j] = 'X';
                }
            }
        }
    }
};