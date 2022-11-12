#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t, a, b, x, y;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> x >> y;
        if (b <= a)
        {
            if ((a - y) <= b)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else if (b > a)
        {
            if ((a + x) >= b)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
