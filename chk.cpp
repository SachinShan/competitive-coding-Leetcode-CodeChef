// #include <iostream>
// #include <vector>
// #include <algorithm>
#include <bits/stdc++.h>
// using namespace std;

// int scoreAndCost(int n, vector<int> &a, vector<int> &b, int x)
// {
//     int sum = 0;
//     for (auto i : a)
//     {
//         sum += i;
//     }
//     if (sum < x)
//     {
//         return -1;
//     }

//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (a[j] > a[i])
//             {
//                 swap(a[j], a[i]);
//                 swap(b[j], b[i]);
//             }
//         }
//     }

//     int score = a[0];
//     int res = 0;

//     for (int i = 1; i < n; i++)
//     {
//         score += a[i];
//         res += b[i];

//         if (score >= x)
//         {
//             break;
//         }
//     }

//     return res;
// }

// int main()
// {
//     int N = 3;
//     vector<int> A = {4, 2, 6};
//     vector<int> B = {14, 7, 7};
//     int X = 11;

//     int result = scoreAndCost(N, A, B, X);
//     cout << "Minimum cost: " << result << endl;
//     // for (int i = 0; i < N; i++)
//     // {
//     //     cout << A[i] << " ";
//     // }
//     // cout << endl;
//     // for (int i = 0; i < N; i++)
//     // {
//     //     cout << B[i] << " ";
//     // }
//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int scoreAndCost(int n, vector<int> &a, vector<int> &b, int x)
// {
//     int sum = 0;
//     for (auto i : a)
//     {
//         sum += i;
//     }
//     if (sum < x)
//     {
//         return -1;
//     }
//     vector<int> scores(n);
//     for (int i = 0; i < n; i++)
//     {
//         scores[i] = a[i] - b[i];
//     }
//     sort(scores.begin(), scores.end(), greater<int>());

//     int total_score = 0;
//     int min_cost = INT_MAX;
//     int free_game_index = -1;

//     for (int i = 0; i < n; i++)
//     {
//         total_score += a[i];
//         if (total_score >= x)
//         {
//             return min_cost;
//         }
//         if (total_score < x)
//         {
//             if (b[i] < min_cost)
//             {
//                 min_cost = b[i];
//                 free_game_index = i;
//             }
//         }
//     }

//     if (free_game_index == -1)
//     {
//         return -1;
//     }

//     min_cost -= b[free_game_index];
//     return min_cost;
// }

// int main()
// {
//     int n = 5;
//     vector<int> a = {5, 4, 3, 1, 6};
//     vector<int> b = {10, 11, 12, 13, 14};
//     int x = 9;

//     int result = scoreAndCost(n, a, b, x);
//     cout << "Minimum cost: " << result << endl;

//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

vector<int> queryResults(vector<int> &A, vector<vector<int>> &queries)
{
    int N = A.size();
    int Q = queries.size();
    vector<int> B(Q);

    for (int q = 0; q < Q; q++)
    {
        int L = queries[q][0];
        int R = queries[q][1];
        int X = queries[q][2];

        for (int i = L; i <= R; i++)
        {
            A[i] ^= X;
        }

        int query_result = 0;
        for (int i = L; i <= R; i++)
        {
            query_result |= A[i];
        }

        B[q] = query_result;
    }

    return B;
}

int main()
{
    int N = 3;
    vector<int> A = {9, 1, 3};
    int Q = 2;
    vector<vector<int>> queries = {{0, 2, 1}, {0, 1, 4}};

    vector<int> result = queryResults(A, queries);

    for (int i = 0; i < Q; i++)
    {
        cout << "Query " << i + 1 << ": " << result[i] << endl;
    }

    return 0;
}
