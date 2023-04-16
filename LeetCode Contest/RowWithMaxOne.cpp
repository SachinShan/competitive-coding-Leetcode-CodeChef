class Solution
{
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>> &mat)
    {
        int n = mat.size();
        int m = mat[0].size();

        int row = 0;
        int one = 0;

        for (int i = 0; i < n; i++)
        {
            int temp = 0;
            for (int j = 0; j < m; j++)
            {
                if (mat[i][j] == 1)
                {
                    temp++;
                }
            }
            if (temp > one)
            {
                one = temp;
                row = i;
            }
        }
        vector<int> ans;
        ans.push_back(row);
        ans.push_back(one);

        return ans;
    }
};