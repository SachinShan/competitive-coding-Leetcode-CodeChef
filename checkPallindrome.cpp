#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    int temp = x, rev = 0;
    while (temp != 0)
    {
        rev = rev * 10 + temp % 10;
        temp = temp / 10;
    }

    int sum = x + rev;
    temp = sum;
    int revsum = 0;
    while (temp != 0)
    {
        revsum = revsum * 10 + temp % 10;
        temp = temp / 10;
    }
    if (sum == revsum)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}