#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string binary;
        cin >> binary;
        int one = 0, zero = 0;
        for (int i = 0; i < n; i++)
        {
            if (binary[i] == '0')
            {
                zero++;
            }
            else
            {
                one++;
            }
        }

        if (one == 0)
        {
            cout << 0 << endl;
        }
        else if (zero == 0)
        {
            cout << 1 << endl;
        }
        else if (zero == 1 && n != 2)
        {
            cout << 2 << endl;
        }
        else if (one == 1)
        {
            cout << 1 << endl;
        }
        else if (zero >= one)
        {
            cout << one << endl;
        }
        else if (zero < one)
        {
            cout << zero + 1 << endl;
        }
    }
    return 0;
}
