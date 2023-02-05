class Solution
{
public:
    bool isvowel(char c)
    {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            return true;
        }
        return false;
    }

    vector<int> vowelStrings(vector<string> &words, vector<vector<int>> &queries)
    {
        int n = words.size();
        vector<int> prefix_sum(n + 1, 0);
        vector<int> ans;

        for (int i = 0; i < n; i++)
        {
            prefix_sum[i + 1] = prefix_sum[i];
            char start = words[i][0];
            char end = words[i][words[i].size() - 1];

            if (isvowel(start) && isvowel(end))
            {
                prefix_sum[i + 1]++;
            }
        }

        for (auto &query : queries)
        {
            int l = query[0];
            int r = query[1];
            ans.push_back(prefix_sum[r + 1] - prefix_sum[l]);
        }

        return ans;
    }
};

// class Solution {
// public:
//     bool isvowel(char c){
//         if(c == 'a' || c == 'e' ||c == 'i' ||c == 'o' ||c == 'u'){
//            return true;
//            }
//            return false;
//     }

//     vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
//         unordered_map<int, bool> mapp;

//         for(int i=0; i<words.size(); i++){
//             char start = words[i][0];
//             char end = words[i][words[i].size()-1];

//             if(isvowel(start) && isvowel(end)){
//                 mapp[i] = true;
//             }
//         }
//         vector<int> ans(queries.size(), 0);

//         for(int i=0; i<queries.size(); i++){
//             for(int j=queries[i][0]; j<=queries[i][1]; j++){
//                 if(mapp[j]){
//                     ans[i]++;
//                 }
//             }
//         }
//         return ans;
//     }
// };