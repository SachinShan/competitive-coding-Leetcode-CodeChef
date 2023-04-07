class Solution
{
public:
    // void dfs(int row, int col, vector<vector<int>>& grid, vector<vector<int>>& image, int prev, int color, vector<vector<int>>& visited){

    //     grid[row][col] = color;
    //     int n = image.size();
    //     int m = image[0].size();

    //     int nrow = row+1;
    //     int ncol = col;
    //     if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && image[nrow][ncol] == prev && !visited[nrow][ncol]){
    //         dfs(nrow, ncol, grid, image, prev, color, visited);
    //     }

    //     nrow = row-1;
    //     ncol = col;
    //     if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && image[nrow][ncol] == prev && !visited[nrow][ncol]){
    //         dfs(nrow, ncol, grid, image, prev, color, visited);
    //     }

    //     nrow = row;
    //     ncol = col+1;
    //     if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && image[nrow][ncol] == prev && !visited[nrow][ncol]){
    //         dfs(nrow, ncol, grid, image, prev, color, visited);
    //     }

    //     nrow = row;
    //     ncol = col-1;
    //     if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && image[nrow][ncol] == prev && !visited[nrow][ncol]){
    //         dfs(nrow, ncol, grid, image, prev, color, visited);
    //     }
    // }

    void dfs(int row, int col, vector<vector<int>> &grid, vector<vector<int>> &image, int prev, int color, int drow[], int dcol[])
    {

        grid[row][col] = color;
        int n = image.size();
        int m = image[0].size();

        for (int i = 0; i < 4; i++)
        {
            int nrow = row + drow[i];
            int ncol = col + dcol[i];
            if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && image[nrow][ncol] == prev && grid[nrow][ncol] != color)
            {
                dfs(nrow, ncol, grid, image, prev, color, drow, dcol);
            }
        }

        // int nrow = row+1;
        // int ncol = col;
        // if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && image[nrow][ncol] == prev && image[nrow][ncol] != color){
        //     dfs(nrow, ncol, grid, image, prev, color);
        // }

        // nrow = row-1;
        // ncol = col;
        // if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && image[nrow][ncol] == prev && image[nrow][ncol] != color){
        //     dfs(nrow, ncol, grid, image, prev, color);
        // }

        // nrow = row;
        // ncol = col+1;
        // if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && image[nrow][ncol] == prev && image[nrow][ncol] != color){
        //     dfs(nrow, ncol, grid, image, prev, color);
        // }

        // nrow = row;
        // ncol = col-1;
        // if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && image[nrow][ncol] == prev && image[nrow][ncol] != color){
        //     dfs(nrow, ncol, grid, image, prev, color);
        // }
    }

    vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int color)
    {
        int n = image.size();
        int m = image[0].size();
        // vector<vector<int>> visited(n, vector<int>(m, 0));

        int drow[] = {-1, 0, 1, 0};
        int dcol[] = {0, 1, 0, -1};

        int prev = image[sr][sc];
        vector<vector<int>> grid = image;

        dfs(sr, sc, grid, image, prev, color, drow, dcol);

        return grid;
    }
};

//  void bfs(int row, int col, vector<vector<int>>& grid,vector<vector<int>>& image, vector<vector<int>> &visited, int prev, int color){

//     visited[row][col] = 1;
//     grid[row][col] = color;
//     queue<pair<int, int>> q;

//     q.push({row, col});
//     int n = grid.size();
//     int m = grid[0].size();

//     while(!q.empty()){
//         int row = q.front().first;
//         int col = q.front().second;
//         q.pop();

//         int nrow = row + 1;
//         int ncol = col;
//         if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && image[nrow][ncol]==prev && !visited[nrow][ncol]){
//             visited[nrow][ncol] = 1;
//             grid[row][col] = color;
//             q.push({nrow, ncol});
//         }

//         nrow = row - 1;
//         ncol = col;
//         if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && image[nrow][ncol]==prev && !visited[nrow][ncol]){
//             visited[nrow][ncol] = 1;
//             grid[row][col] = color;
//             q.push({nrow, ncol});
//         }

//         nrow = row;
//         ncol = col + 1;
//         if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && image[nrow][ncol]==prev && !visited[nrow][ncol]){
//             visited[nrow][ncol] = 1;
//             grid[row][col] = color;
//             q.push({nrow, ncol});
//         }

//         nrow = row;
//         ncol = col - 1;
//         if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && image[nrow][ncol]==prev && !visited[nrow][ncol]){
//             visited[nrow][ncol] = 1;
//             grid[row][col] = color;
//             q.push({nrow, ncol});
//         }

//     }
// }