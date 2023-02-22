#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int lel;
    cin >> lel;
    while (lel--)
    {
        int goal, sold;
        cin >> goal >> sold;
        int ans = 0;

        ans = min(sold, goal);
        if (sold > goal)
        {
            ans += 2 * (sold - goal);
        }
        cout << ans << endl;
    }
    return 0;
}
