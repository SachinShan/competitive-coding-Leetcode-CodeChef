class Solution
{
public:
    bool fun(vector<int> &arr, int ind, unordered_map<int, bool> &mapp)
    {
        if (ind < 0 || ind >= arr.size())
        {
            return false;
        }
        if (arr[ind] == 0)
        {
            return true;
        }
        if (mapp[ind])
        {
            return false;
        }

        mapp[ind] = true;

        return fun(arr, ind - arr[ind], mapp) || fun(arr, ind + arr[ind], mapp);
    }

    bool canReach(vector<int> &arr, int start)
    {
        unordered_map<int, bool> mapp;

        return fun(arr, start, mapp);
    }
};