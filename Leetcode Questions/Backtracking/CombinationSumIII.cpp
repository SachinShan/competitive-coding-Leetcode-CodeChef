class Solution
{
public:
    void solve(int ind, int target, vector<int> &arr, vector<vector<int>> &ans, vector<int> &temp, int k)
    {
        if (target == 0 & temp.size() == k)
        {
            ans.push_back(temp);
            return;
        }

        for (int i = ind; i < arr.size(); i++)
        {
            if (i > ind && arr[i - 1] == arr[i])
                continue;

            if (arr[i] > target)
                break;

            temp.push_back(arr[i]);
            solve(i + 1, target - arr[i], arr, ans, temp, k);
            temp.pop_back();
        }
    }

    vector<vector<int>> combinationSum3(int k, int n)
    {
        vector<int> hold;
        for (int i = 0; i < 9; i++)
        {
            hold.push_back(i + 1);
        }

        sort(hold.begin(), hold.end());
        vector<vector<int>> ans;
        vector<int> temp;

        solve(0, n, hold, ans, temp, k);
        return ans;
    }
};
