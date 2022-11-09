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
        int color[n];
        for (int i = 0; i < n; i++)
        {
            cin >> color[i];
        }

        int max = color[0];
        for (int i = 0; i < n; i++)
        {
            if (max < color[i])
            {
                max = color[i];
            }
        }
        cout << max << endl;
    }
    return 0;
}
