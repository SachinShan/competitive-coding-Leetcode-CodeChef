class Solution
{
public:
    int accountBalanceAfterPurchase(int pa)
    {

        //         double temp = ceil(pa/10);

        //         return 100 - temp*10;

        int roundedAmount = (int)round(pa / 10.0) * 10;
        int remainingBalance = 100 - roundedAmount;
        return remainingBalance;
    }
};