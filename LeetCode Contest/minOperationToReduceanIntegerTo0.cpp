class Solution
{
public:
    int solve(int n)
    {
        if (n == 1 || n == 2)
        {
            return 1;
        }
        int i = 0;

        for (i = 1; i < n; i++)
        {
            long long k = pow(2, i);
            if (k == n)
            {
                return 1;
            }

            if (k > n)
            {
                break;
            }
        }
        long long greater = pow(2, i);
        long long lower = pow(2, i - 1);

        long long mini = min((greater - n), (n - lower));

        return 1 + solve(mini);
    }

    int minOperations(int n)
    {

        return solve(n);
    }
};