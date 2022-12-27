class Solution
{
public:
    void rotate(vector<vector<int>> &matrix)
    {
        int n = matrix.size();

        vector<vector<int>> temp(n, vector<int>(n, 0));

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                temp[i][j] = matrix[i][j];
            }
        }
        // for(int i=0; i<n; i++){
        //     for(int j=0; j<n; j++){
        //         cout<<temp[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        int l = 0;
        for (int i = 0; i < n; i++)
        {
            int k = n - 1;
            for (int j = 0; j < n; j++)
            {
                matrix[i][j] = temp[k][l];
                k--;
            }
            l++;
        }
    }
};