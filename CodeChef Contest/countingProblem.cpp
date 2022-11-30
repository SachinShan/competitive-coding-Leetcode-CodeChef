#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    int a = 0, b = 0;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int sum = 0, flag = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
            if (arr[i] % 2 != 0)
            {
                flag = 1;
            }
        }

        if (flag && sum % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
