class Solution
{
public:
    int countPrimes(int n)
    {
        if (n <= 2)
        {
            return 0;
        }
        vector<bool> sieve(n, true);
        sieve[0] = false;
        sieve[1] = false;

        for (long long i = 2; i < n; i++)
        {
            if (sieve[i] == true)
            {
                for (long long j = i * i; j < n; j += i)
                {
                    sieve[j] = false;
                }
            }
        }

        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (sieve[i])
            {
                ans++;
            }
        }
        return ans;
    }
};

// class Solution {
// public:
//     vector<int> dp;
//     bool isPrime(int n)
//     {
//         if (n == 2)
//         {
//             return true;
//         }
//         for (int i = 2; i <= ceil(sqrt(n)); i++)
//         {
//             if (n % i == 0)
//             {
//                 return false;
//             }
//         }
//         return true;
//     }

//     int countPrime(int n){
//         if(n <= 2){
//             return 0;
//         }

//         if(dp[n] != -1){
//             return dp[n];
//         }

//         dp[n] = dp[n-1] + countPrime(n-1);
//         return dp[n];
//     }

//     int countPrimes(int n) {
//         int ans = 0;
//         for(int i=0; i<=n; i++){
//             dp.push_back(-1);
//         }

//         return countPrime(n);
// if(n < 2){
//     return 0;
// }
// for(int i=2; i<n; i++){
//     if(isPrime(i)){
//         ans++;
//     }
// }
// return ans;
//     }
// };