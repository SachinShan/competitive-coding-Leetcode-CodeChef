class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> ans(numRows);

        for (int i = 0; i < numRows; i++)
        {
            ans[i].resize(i + 1);
            ans[i][0] = ans[i][i] = 1;

            for (int j = 1; j < i; j++)
            {
                ans[i][j] = ans[i - 1][j - 1] + ans[i - 1][j];
            }
        }

        return ans;
    }
};

// This Solution is causing Runtime error on testcase 22

// class Solution {
// public:
//     long long int cal_n(int n){
//         long long int temp = 1;
//         for (int i = 2; i <= n; i++)
//             temp = temp * i;
//         return temp;
//     }
//     //function to calculate ncr
//     long long int nCr(int n, int r){
//         return cal_n(n) / (cal_n(r) * cal_n(n - r));
//     }

//     vector<vector<int>> generate(int numRows) {
//         vector<vector<int> > ans;
//         vector<int> temp;

//         temp.push_back(1);
//         ans.push_back(temp);
//         if(numRows == 1){
//             return ans;
//         }

//         for(int i=2; i<=numRows; i++){
//             temp.resize(i);

//             for(int j=1; j<i; j++){
//                 temp[j] = nCr(i-1, j);
//             }
//             ans.push_back(temp);
//         }

//         return ans;
//     }
// };
