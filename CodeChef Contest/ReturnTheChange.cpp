#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int num;
        cin >> num;
        int rem = num % 10;
        int temp;
        if (rem < 5)
        {
            temp = num / 10;
        }
        else
        {
            temp = num / 10 + 1;
        }

        cout << 100 - (temp * 10) << endl;
    }
    return 0;
}
