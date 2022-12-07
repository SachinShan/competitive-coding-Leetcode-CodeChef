#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        if ((x + y) % 2 == 0)
        {
            cout << (x + y) / 2 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}
