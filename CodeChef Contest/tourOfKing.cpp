#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> n >> m;
        int ans = 5 * n + 7 * m;
        cout << ans << endl;
    }
    return 0;
}
