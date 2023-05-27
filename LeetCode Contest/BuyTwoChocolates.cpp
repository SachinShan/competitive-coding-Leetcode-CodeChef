class Solution
{
public:
    int buyChoco(vector<int> &prices, int money)
    {
        sort(prices.begin(), prices.end());

        int add = 0;
        add += prices[0];
        add += prices[1];

        if (add > money)
        {
            return money;
        }
        return money - add;
    }
};