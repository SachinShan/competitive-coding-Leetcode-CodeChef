#include <iostream>
#include <vector>
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
        vector<int> laila(n, 0), majnu(n, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> laila[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> majnu[i];
        }

        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int count = 0;
            while (laila[i] != 0 && majnu[i] != 0 && i < n)
            {
                count++;
                i++;
            }
            ans = max(ans, count);
        }
        cout << ans << endl;
    }
    return 0;
}
