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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int count = 0, flag = 0;
        for (int i = 1; i < n; i++)
        {

            if (arr[i] != arr[i - 1])
            {
                if (flag == 0)
                {
                    count += 2;
                    flag++;
                }

                else
                {
                    count++;
                }
            }
            else
            {
                flag = 0;
            }
        }
        cout << count << endl;
    }
    return 0;
}
