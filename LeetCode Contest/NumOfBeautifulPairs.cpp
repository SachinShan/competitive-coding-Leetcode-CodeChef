class Solution
{
public:
    //     bool isCoprime(int a, int b) {
    //         int gcd = calculateGCD(a, b);
    //         return gcd == 1;
    //     }

    //     int calculateGCD(int a, int b) {
    //         if (b == 0) {
    //             return a;
    //         }
    //         return calculateGCD(b, a % b);
    //     }

    int first(int n)
    {
        while (n > 9)
        {
            n = n / 10;
        }
        return n;
    }

    int countBeautifulPairs(vector<int> &nums)
    {
        int n = nums.size();
        int cnt = 0;
        unordered_map<int, bool> mapp;

        for (int i = 0; i < n - 1; i++)
        {

            int a = first(nums[i]);

            for (int j = i + 1; j < n; j++)
            {

                int b = nums[j] % 10;

                // int c = (10*a) + b;
                // int d = (10*b) + a;

                if (__gcd(a, b) == 1)
                {
                    cnt++;
                    // mapp[c] = true;
                    // mapp[d] = true;
                }
            }
        }
        return cnt;
    }
};