#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int pighl, garam;
        cin >> pighl >> garam;
        int cnt = 0;
        int i = 1;
        while (garam < pighl)
        {
            cnt++;
            garam += i;
            i++;
        }
        cout << cnt << endl;
    }
    return 0;
}
