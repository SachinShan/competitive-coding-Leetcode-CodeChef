class Solution
{
public:
    vector<int> findColumnWidth(vector<vector<int>> &grid)
    {
        int n = grid.size();
        int m = grid[0].size();

        vector<int> ans(m);

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                string temp = to_string(grid[i][j]);

                int res = temp.size();
                ans[j] = max(res, ans[j]);
            }
        }
        return ans;
    }
};