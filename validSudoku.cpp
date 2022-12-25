class Solution
{
public:
    bool isValidSudoku(vector<vector<char>> &board)
    {
        int n = board.size();
        set<string> s;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (board[i][j] != '.')
                {
                    string r = "r" + to_string(i) + board[i][j];
                    string c = "c" + to_string(j) + board[i][j];
                    string sqr = "sqr" + to_string((i / 3) * 3 + (j / 3)) + board[i][j];

                    if (s.find(r) == s.end() && s.find(c) == s.end() && s.find(sqr) == s.end())
                    {
                        s.insert(r);
                        s.insert(c);
                        s.insert(sqr);
                    }
                    else
                    {
                        return false;
                    }
                }
            }
        }

        return true;
    }
};