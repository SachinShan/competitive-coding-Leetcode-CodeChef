// Recursion

bool fun(int ind, int target, vector<int> &arr)
{
    if (target == 0)
    {
        return true;
    }
    if (ind == 0)
    {
        return arr[0] == target;
    }

    bool notTake = fun(ind - 1, target, arr);
    bool take = false;
    if (arr[ind] <= target)
    {
        take = fun(ind - 1, target - arr[ind], arr);
    }

    return take | notTake;
}

bool subsetSumToK(int n, int k, vector<int> &arr)
{
    return fun(n - 1, k, arr);
}

// Memoization .........................................

#include <bits/stdc++.h>

bool fun(int ind, int target, vector<int> &arr, vector<vector<int>> &dp)
{
    if (target == 0)
    {
        return true;
    }
    if (ind == 0)
    {
        return arr[0] == target;
    }
    if (dp[ind][target] != -1)
    {
        return dp[ind][target];
    }

    bool notTake = fun(ind - 1, target, arr, dp);
    bool take = false;
    if (arr[ind] <= target)
    {
        take = fun(ind - 1, target - arr[ind], arr, dp);
    }

    return dp[ind][target] = take | notTake;
}

bool subsetSumToK(int n, int k, vector<int> &arr)
{
    // Write your code here.
    vector<vector<int>> dp(n, vector<int>(k + 1, -1));
    return fun(n - 1, k, arr, dp);
}

// Memoization ....................................................

class Solution
{
public:
    bool fun(int ind, int target, vector<int> &arr, vector<vector<int>> &dp)
    {
        if (target == 0)
        {
            return true;
        }
        if (ind == 0)
        {
            return arr[0] == target;
        }
        if (dp[ind][target] != -1)
        {
            return dp[ind][target];
        }

        bool notTake = fun(ind - 1, target, arr, dp);
        bool take = false;
        if (arr[ind] <= target)
        {
            take = fun(ind - 1, target - arr[ind], arr, dp);
        }

        return dp[ind][target] = take | notTake;
    }

    bool canPartition(vector<int> &nums)
    {
        int n = nums.size();

        int sum = accumulate(nums.begin(), nums.end(), 0);
        if (sum % 2 != 0)
        {
            return false;
        }
        vector<vector<int>> dp(n, vector<int>(sum / 2 + 1, -1));
        return fun(n - 1, sum / 2, nums, dp);
    }
};