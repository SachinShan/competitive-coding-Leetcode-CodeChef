// n = 1999
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    while (n >= 10)
    {

        int temp = n;
        int sum = 0;
        while (temp != 0)
        {
            sum += temp % 10;
            temp = temp / 10;
        }
        n = sum;
    }

    cout << n;
}
