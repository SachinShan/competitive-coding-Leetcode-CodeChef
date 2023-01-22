class Solution
{
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>> &score, int k)
    {
        int row = score.size();
        int col = score[0].size();

        vector<int> temp;
        unordered_map<int, int> mapp;
        for (int i = 0; i < row; i++)
        {
            mapp[score[i][k]] = i;
            temp.push_back(score[i][k]);
        }
        sort(temp.begin(), temp.end(), greater<>());

        vector<vector<int>> ans;

        for (int i = 0; i < temp.size(); i++)
        {
            int ind = mapp[temp[i]];
            ans.push_back(score[ind]);
        }

        return ans;
    }
};

// for(int i=0; i<row-1; i++){
//             if(score[i][k] < score[i+1][k]){
//                 for(int j=0; j<col; j++){
//                     swap(score[i][j], score[i+1][j]);
//                 }
//             }
//         }
//         return score;