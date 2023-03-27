class Solution
{
public:
    // bool prime[1001];
    // memset(prime, true, sizeof(prime));

    // void SieveOfEratosthenes(int n)
    // {

    //     for (int p = 2; p * p <= n; p++) {

    //         if (prime[p] == true) {

    //             for (int i = p * p; i <= n; i += p)
    //                 prime[i] = false;
    //         }
    //     }

    // }
    bool prime[10001];
    void soe(int n)
    {

        memset(prime, true, sizeof(prime));

        for (int k = 2; k * k <= n; k++)
        {

            if (prime[k] == true)
            {

                for (int i = k * k; i <= n; i += k)
                    prime[i] = false;
            }
        }
    }

    int nearest_prime(int n, int mini)
    {

        for (int i = n - 1; i >= 2; i--)
        {
            if (prime[i])
            {
                if ((n - i) > mini)
                {
                    return i;
                }
            }
        }
        return 0;
    }

    bool primeSubOperation(vector<int> &nums)
    {
        int n = nums.size();
        soe(1000);
        nums[0] = nums[0] - nearest_prime(nums[0], INT_MIN);

        for (int i = 1; i < n; i++)
        {
            nums[i] = nums[i] - nearest_prime(nums[i], nums[i - 1]);
        }
        for (int i = 0; i < n; i++)
        {
            cout << nums[i] << " ";
        }
        cout << endl;

        for (int i = 1; i < n; i++)
        {
            if (nums[i] <= nums[i - 1])
            {
                return false;
            }
        }
        return true;
    }
};
