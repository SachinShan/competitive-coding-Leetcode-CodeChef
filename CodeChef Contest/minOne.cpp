#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int c;
        cin >> c;
        int x = ceil(c / 2);
        cout << x << endl;
    }
    return 0;
}
