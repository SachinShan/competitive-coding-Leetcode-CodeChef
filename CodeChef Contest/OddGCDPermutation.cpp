#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int num;
        cin >> num;
        if (num % 2 == 0)
        {
            for (int i = num; i > 0; i--)
            {
                cout << i << " ";
            }
        }
        else
        {
            cout << -1;
        }
        cout << endl;
    }
    return 0;
}
