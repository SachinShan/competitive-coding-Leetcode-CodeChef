class Solution
{
public:
    void backtrack(int ind, int n, int k, vector<int> &temp, vector<vector<int>> &ans)
    {

        if (k == 0)
        {
            ans.push_back(temp);
        }

        for (int i = ind + 1; i <= n; i++)
        {
            temp.push_back(i);
            backtrack(i, n, k - 1, temp, ans);
            temp.pop_back();
        }
    }

    vector<vector<int>> combine(int n, int k)
    {
        vector<vector<int>> ans;

        vector<int> temp;
        backtrack(0, n, k, temp, ans);

        return ans;
    }
};