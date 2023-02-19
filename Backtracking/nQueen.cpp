class Solution
{
public:
    vector<vector<string>> ans;

    bool issafe(vector<string> &board, int row, int col)
    {
        int n = board.size();

        for (int i = 0; i < n; i++)
        {
            if (board[i][col] == 'Q')
            {
                return false;
            }

            if (row - i >= 0 && col - i >= 0 && board[row - i][col - i] == 'Q')
                return false;
            if (row - i >= 0 && col + i >= 0 && board[row - i][col + i] == 'Q')
                return false;
        }
        return true;
    }

    void nqueen(vector<string> &board, int row)
    {
        if (row == board.size())
        {
            ans.push_back(board);
            return;
        }

        for (int i = 0; i < board.size(); i++)
        { // here i represents the coloumn
            if (issafe(board, row, i))
            {
                board[row][i] = 'Q';
                nqueen(board, row + 1);
                board[row][i] = '.'; // Backtracking
            }
        }
    }

    vector<vector<string>> solveNQueens(int n)
    {
        // This is the main funtion
        vector<string> board(n, string(n, '.'));

        nqueen(board, 0);
        return ans;
    }
};