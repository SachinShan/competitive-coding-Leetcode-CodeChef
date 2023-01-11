#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        bool flag = false;
        while (x != 0)
        {
            if (x % 10 == 7)
            {
                flag = true;
                break;
            }
            x = x / 10;
        }

        if (flag)
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
