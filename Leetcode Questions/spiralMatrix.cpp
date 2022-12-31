class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> ans;

        int top = 0, bottom = m - 1, left = 0, right = n - 1;
        int count = m * n;

        while (top <= bottom && left <= right)
        {

            for (int i = left; i <= right; i++)
            {
                ans.push_back(matrix[top][i]);
                count--;
            }
            top++;

            if (!count)
                break;

            for (int i = top; i <= bottom; i++)
            {
                ans.push_back(matrix[i][right]);
                count--;
            }
            right--;

            if (!count)
                break;

            for (int i = right; i >= left; i--)
            {
                ans.push_back(matrix[bottom][i]);
                count--;
            }
            bottom--;

            if (!count)
                break;

            for (int i = bottom; i >= top; i--)
            {
                ans.push_back(matrix[i][left]);
                count--;
            }
            left++;

            if (!count)
                break;
        }

        return ans;
    }
};