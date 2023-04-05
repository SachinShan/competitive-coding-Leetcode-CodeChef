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
        string s;
        cin >> n;
        cin >> s;

        char x = '1', y = '0';
        int z = 0, on = 1;

        for (int i = 1; i < n; i++)
        {
            if (y != s[i - 1])
            {
                y = '1';
                z++;
            }
            else
            {
                y = '0';
            }
        }
        for (int i = 1; i < n; i++)
        {
            if (x != s[i - 1])
            {
                x = '1';
                on++;
            }
            else
            {
                x = '0';
            }
        }

        cout << max(on, z) << endl;
    }
    return 0;
}
