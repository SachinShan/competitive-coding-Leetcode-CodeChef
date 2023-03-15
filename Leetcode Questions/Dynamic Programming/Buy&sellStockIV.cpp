class Solution
{
public:
    int stock(int ind, int buy, vector<int> &prices, vector<vector<vector<int>>> &dp, int cap)
    {
        if (cap == 0)
        {
            return 0;
        }
        if (ind >= prices.size())
        {
            return 0;
        }
        if (dp[ind][buy][cap] != -1)
        {
            return dp[ind][buy][cap];
        }
        int profit = 0;
        if (buy)
        {
            profit = max((-prices[ind] + stock(ind + 1, 0, prices, dp, cap)), (stock(ind + 1, 1, prices, dp, cap)));
        }
        else
        {
            profit = max((prices[ind] + stock(ind + 1, 1, prices, dp, cap - 1)), (stock(ind + 1, 0, prices, dp, cap)));
        }

        return dp[ind][buy][cap] = profit;
    }

    int maxProfit(int k, vector<int> &prices)
    {
        int n = prices.size();

        // vector<vector<int>>dp(n, vector<int>(2, -1));
        vector<vector<vector<int>>> dp(n, vector<vector<int>>(2, vector<int>(k + 1, -1)));

        return stock(0, 1, prices, dp, k);
    }
};