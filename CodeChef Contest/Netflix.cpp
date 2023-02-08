#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int x, a, b, c;
        cin >> a >> b >> c >> x;
        int p = a + b;
        int q = a + c;
        int r = b + c;

        if (p >= x || q >= x || r >= x)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
