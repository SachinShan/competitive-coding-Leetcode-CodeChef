// Recursion..............

class Solution
{
public:
    int coin(int ind, int amt, vector<int> &coins)
    {
        if (ind >= coins.size() || amt <= 0)
        {
            if (amt == 0)
            {
                return 0;
            }
            else
                return INT_MAX - 1;
        }

        int res = -1;

        if (coins[ind] > amt)
        {
            int nottake = coin(ind + 1, amt, coins);
            res = nottake;
        }
        else
        {
            int take = 1 + coin(ind, amt - coins[ind], coins);
            int nottake = coin(ind + 1, amt, coins);
            res = min(take, nottake);
        }

        return res;
    }

    int coinChange(vector<int> &coins, int amount)
    {

        int res = coin(0, amount, coins);

        if (res == INT_MAX - 1)
        {
            return -1;
        }
        else
            return res;
    }
};

// Memoization....................................

class Solution
{
public:
    int coin(int ind, int amt, vector<int> &coins, vector<vector<int>> &dp)
    {
        if (ind >= coins.size() || amt <= 0)
        {
            if (amt == 0)
            {
                return 0;
            }
            else
                return INT_MAX - 1;
        }

        if (dp[ind][amt] != -1)
        {
            return dp[ind][amt];
        }

        int res = -1;

        if (coins[ind] > amt)
        {
            int nottake = coin(ind + 1, amt, coins, dp);
            // res = nottake;
            dp[ind][amt] = nottake;
        }
        else
        {
            int take = 1 + coin(ind, amt - coins[ind], coins, dp);
            int nottake = coin(ind + 1, amt, coins, dp);
            // res = min(take, nottake);
            dp[ind][amt] = min(take, nottake);
        }

        // return res;
        return dp[ind][amt];
    }

    int coinChange(vector<int> &coins, int amount)
    {
        int n = coins.size();
        vector<vector<int>> dp(n, vector<int>(amount + 1, -1));

        int res = coin(0, amount, coins, dp);

        if (res == INT_MAX - 1)
        {
            return -1;
        }
        else
            return res;
    }
};