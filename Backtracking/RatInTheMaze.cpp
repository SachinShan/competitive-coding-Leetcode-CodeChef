public:
vector<string> res;

void rat(int x, int y, int n, string ans, vector<vector<int>> &m, vector<vector<int>> &visited)
{
    if (x == n - 1 && y == n - 1)
    {
        res.push_back(ans);
        return;
    }

    if (x >= n || x < 0 || y >= n || y < 0 || visited[x][y] == 1 || m[x][y] == 0)
    {
        return;
    }
    visited[x][y] = 1;
    rat(x - 1, y, n, ans + "U", m, visited);
    rat(x + 1, y, n, ans + "D", m, visited);
    rat(x, y - 1, n, ans + "L", m, visited);
    rat(x, y + 1, n, ans + "R", m, visited);
    visited[x][y] = 0;
}

vector<string> findPath(vector<vector<int>> &m, int n)
{
    // Your code goes here
    if (m[0][0] == 0 || m[n - 1][n - 1] == 0)
    {
        return res;
    }
    vector<vector<int>> visited(n, vector<int>(n, 0));

    rat(0, 0, n, "", m, visited);
    sort(res.begin(), res.end());
    return res;
}