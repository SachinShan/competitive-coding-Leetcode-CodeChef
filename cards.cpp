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
        int card[n];
        int count[10];
        for (int i = 0; i < 10; i++)
        {
            count[i] = 0;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> card[i];
            count[card[i]]++;
        }

        int maxi = count[0];
        for (int i = 0; i < 10; i++)
        {
            if (count[i] > maxi)
            {
                maxi = count[i];
            }
        }

        cout << (n - maxi) << endl;
    }
    return 0;
}
