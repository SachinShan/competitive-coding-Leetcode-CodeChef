#include <iostream>
using namespace std;

int main()
{
    int arr[4] = {2, 4, 7, 2};

    int temp1 = 0, temp2 = 0;

    for (int i = 0; i < 4; i++)
    {
        temp1 = temp1 * 10 + arr[i];
    }

    for (int i = 3; i >= 0; i--)
    {
        temp2 = temp2 * 10 + arr[i];
    }

    cout << temp1 + temp2;
}