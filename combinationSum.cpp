class Solution
{
public:
    void findCombination(int ind, int target, vector<int> &arr, vector<vector<int>> &ans, vector<int> &ds)
    {
        if (ind == arr.size())
        {
            if (target == 0)
            {
                ans.push_back(ds);
            }
            return;
        }

        if (arr[ind] <= target)
        {
            ds.push_back(arr[ind]);
            findCombination(ind, target - arr[ind], arr, ans, ds);
            ds.pop_back();
        }
        findCombination(ind + 1, target, arr, ans, ds);
    }

    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {
        vector<vector<int>> ans;
        vector<int> ds;
        findCombination(0, target, candidates, ans, ds);
        return ans;
    }
};



// class Solution {
// public:
    

//     void solve(vector<vector<int>> &ans, vector<int>& candidates, int index, int target, vector<int> &temp){
//         if(index == candidates.size()){
//             if(target == 0){
//                 ans.push_back(temp);
//             }
//             return;
//         }

//         if(candidates[index] <= target){
//             target = target-candidates[index];
//             temp.push_back(candidates[index]);
//             solve(ans, candidates, index, target, temp);
//             temp.pop_back();
//         }

//         solve(ans, candidates, index+1, target, temp);
//     }

//     vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
//         vector<vector<int>> ans;
//         vector<int> temp;
//         solve(ans, candidates, 0, target, temp);
//         return ans;
//     }
// };