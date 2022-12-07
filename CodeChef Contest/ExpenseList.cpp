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
        int n, x;
        cin >> n >> x;
        int y = x - n;
        cout << pow(2, y) << endl;
    }
    return 0;
}
