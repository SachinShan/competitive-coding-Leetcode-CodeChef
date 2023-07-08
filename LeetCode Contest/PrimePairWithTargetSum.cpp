class Solution
{
public:
    vector<vector<int>> findPrimePairs(int n)
    {
        //         vector<bool> temp(n + 1, true);
        //         temp[0] = false;
        //         temp[1] = false;

        //         for (int i = 2; i * i <= n; i++) {
        //             if (temp[i]) {
        //                 for (int j = i * i; j <= n; j += i) {
        //                     temp[j] = false;
        //                 }
        //             }
        //         }

        //         vector<vector<int>> P;
        //         for (int i = 2; i <= n / 2; i++) {
        //             if (temp[i] && temp[n - i]) {
        //                 P.push_back({i, n - i});
        //             }
        //         }

        //         return P;

        vector<bool> temp(n + 1, true);
        temp[1] = false;
        temp[0] = false;

        for (int i = 2; i * i <= n; i++)
            if (temp[i])
                for (int j = i * i; j <= n; j += i)
                    temp[j] = false;

        vector<vector<int>> primePairs;
        for (int i = 2; i <= n / 2; i++)
            if (temp[i] && temp[n - i])
                primePairs.push_back({i, n - i});

        return primePairs;
    }
};