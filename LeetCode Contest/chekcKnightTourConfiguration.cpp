class Solution
{
public:
    bool issafe(int x, int y, int count, int n, vector<vector<int>> &grid)
    {
        if (x < 0 || x >= n || y < 0 || y >= n)
        {
            return false;
        }
        if (grid[x][y] != count)
        {
            return false;
        }

        return true;
    }

    bool visit(int x, int y, int count, int n, vector<vector<int>> &grid, int check)
    {

        if (count == check)
        {
            return true;
        }

        if (issafe(x - 1, y - 2, count + 1, n, grid))
        {
            return visit(x - 1, y - 2, count + 1, n, grid, check);
        }
        if (issafe(x - 2, y + 1, count + 1, n, grid))
        {
            return visit(x - 2, y + 1, count + 1, n, grid, check);
        }
        if (issafe(x + 2, y - 1, count + 1, n, grid))
        {
            return visit(x + 2, y - 1, count + 1, n, grid, check);
        }
        if (issafe(x + 2, y + 1, count + 1, n, grid))
        {
            return visit(x + 2, y + 1, count + 1, n, grid, check);
        }
        if (issafe(x - 1, y + 2, count + 1, n, grid))
        {
            return visit(x - 1, y + 2, count + 1, n, grid, check);
        }
        if (issafe(x + 1, y + 2, count + 1, n, grid))
        {
            return visit(x + 1, y + 2, count + 1, n, grid, check);
        }
        if (issafe(x - 2, y - 1, count + 1, n, grid))
        {
            return visit(x - 2, y - 1, count + 1, n, grid, check);
        }
        if (issafe(x + 1, y - 2, count + 1, n, grid))
        {
            return visit(x + 1, y - 2, count + 1, n, grid, check);
        }

        return false;
    }

    bool checkValidGrid(vector<vector<int>> &grid)
    {
        int n = grid.size();
        int check = (n * n) - 1;

        if (grid[0][0] != 0)
        {
            return false;
        }

        return visit(0, 0, 0, n, grid, check);
    }
};