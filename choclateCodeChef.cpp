#include <iostream>
using namespace std;

int choclate(int x, int y)
{
    if (x == y || x == 0 || y == 0)
    {
        int temp;
        temp = x + y;
        return temp;
    }

    if (x > y)
    {
        cout << "x" << x << " " << y << endl;
        choclate(x - y, y);
    }
    if (x < y)
    {
        cout << "y" << x << " " << y << endl;
        choclate(x, y - x);
    }
}

int main()
{
    // your code goes here
    int t, x, y;
    cin >> t;
    while (t--)
    {
        cin >> x;
        cin >> y;
        cout << choclate(x, y);
    }

    return 0;
}
