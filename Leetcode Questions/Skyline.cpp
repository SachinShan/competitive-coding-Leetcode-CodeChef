class Solution
{
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>> &grid)
    {
        int n = grid.size();
        vector<int> row(n, 0), col(n, 0);

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                row[i] = max(row[i], grid[i][j]);
                col[j] = max(col[j], grid[i][j]);
            }
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                ans += (min(row[i], col[j]) - grid[i][j]);
            }
        }
        return ans;
    }
};

// class Solution {
// public:
//     int n;
//     int ans(int i, int j, vector<vector<int>>& grid){
//         int row = 0, col = 0;

//         for(int x = 0; x<n; x++){
//             row = max(row, grid[i][x]);
//             col = max(col, grid[x][i]);
//         }

//         // return abs(grid[i][j] - min(row, col));
//         return min(row, col) - grid[i][j];
//     }

//     int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
//         n = grid.size();
//         int res = 0;

//         for(int i=0; i<n; i++){
//             for(int j=0; j<n; j++){
//                 res += ans(i, j, grid);
//             }
//         }
//         return res;
//     }
// };