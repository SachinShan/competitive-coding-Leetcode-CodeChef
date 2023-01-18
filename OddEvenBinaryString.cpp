#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int zero = 0;
        int n;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (a == 0)
            {
                zero++;
            }
        }
        if (zero % 2 == 0)
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
