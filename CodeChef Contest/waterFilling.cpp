#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int s = a + b + c;
        if (s <= 1)
        {
            cout << "Water filling time" << endl;
        }
        else
        {
            cout << "Not now" << endl;
        }
    }
    return 0;
}
