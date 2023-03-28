class Solution
{
public:
    int honeymoon(vector<int> &days, vector<int> &costs, int n, int index, vector<int> &dp)
    {
        if (index >= n)
        {
            return 0;
        }
        if (dp[index] != -1)
        {
            return dp[index];
        }

        int day1 = costs[0] + honeymoon(days, costs, n, index + 1, dp);

        int i = index;
        while (i < n && days[i] < days[index] + 7)
        {
            i++;
        }

        int day7 = costs[1] + honeymoon(days, costs, n, i, dp);

        i = index;
        while (i < n && days[i] < days[index] + 30)
        {
            i++;
        }

        int day30 = costs[2] + honeymoon(days, costs, n, i, dp);

        return dp[index] = min(day1, min(day7, day30));
    }

    int mincostTickets(vector<int> &days, vector<int> &costs)
    {
        int n = days.size();
        vector<int> dp(n, -1);
        return honeymoon(days, costs, n, 0, dp);
    }
};