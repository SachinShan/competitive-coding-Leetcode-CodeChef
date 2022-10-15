// #include <iostream>
// using namespace std;

// int choclate(int x, int y, int temp)
// {
//     if (x == y || x == 0 || y == 0)
//     {
//         // cout << "x" << x << "y" << y << endl;
//         temp = x + y;
//         cout << "temp" << temp << endl;
//         return temp;
//     }

//     if (x > y)
//     {
//         // cout << "x" << x << " " << y << endl;
//         choclate(x - y, y);
//     }
//     if (x < y)
//     {
//         // cout << "y" << x << " " << y << endl;
//         choclate(x, y - x);
//     }

//     return temp;
// }

// int main()
// {
//     // your code goes here
//     int t, x, y = 0;
//     cout << "Enter the number of test cases: ";
//     cin >> t;
//     while (t--)
//     {
//         cout << "Enter the value of x ";
//         cin >> x;
//         cout << "Enter the value of y ";
//         cin >> y;
//         cout << choclate(x, y);
//         // cout << "Result" << result << endl;
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

int temp = 0;

int choclate(int x, int y)
{
    if (x == y || x == 0 || y == 0)
    {
        // cout << "x" << x << "y" << y << endl;
        temp = x + y;
        cout << "temp" << temp << endl;
        return temp;
    }

    if (x > y)
    {
        // cout << "x" << x << " " << y << endl;
        choclate(x - y, y);
    }
    if (x < y)
    {
        // cout << "y" << x << " " << y << endl;
        choclate(x, y - x);
    }

    return temp;
}

int main()
{
    // your code goes here
    int t, x, y;
    cout << "Enter the number of test cases: ";
    cin >> t;
    while (t--)
    {
        cout << "Enter the value of x ";
        cin >> x;
        cout << "Enter the value of y ";
        cin >> y;
        cout << choclate(x, y);
        // cout << "Result" << result << endl;
    }

    return 0;
}