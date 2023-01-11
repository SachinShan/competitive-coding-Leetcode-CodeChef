// #include <iostream>
// using namespace std;

// int main()
// {
//     // your code goes here
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         long long int x, y;
//         cin >> x >> y;
//         for (int i = 1; i <= 100000; i++)
//         {
//             if ((i + x) % y == 0 && (i + y) % x == 0)
//             {
//                 cout << i << endl;
//                 break;
//             }
//         }
//     }
//     return 0;
// }

#include <iostream>
using namespace std;
int i = 1;
int fun(int x, int y, int n)
{
    if ((n + x) % y == 0 && (n + y) % x == 0)
    {
        return n;
    }
    cout << "Running" << i++ << endl;
    fun(x, y, n + 1);
    // fun(x, y, n + y);
}

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int maxi = max(x, y);
        cout << fun(x, y, maxi) << endl;
    }
    return 0;
}
