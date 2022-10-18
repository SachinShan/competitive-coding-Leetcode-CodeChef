#include <iostream>
using namespace std;

bool pallindrome(int x)
{
    if (x < 0)
    {
        return false;
    }
    int temp = x;
    int temp1 = 0;
    while (x != 0)
    {
        temp1 = temp1 * 10 + x % 10;
        x = x / 10;
    }
    cout << "temp1 is : " << temp1 << endl;
    if (temp1 == temp)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int x;
    cout << "Enter the number to check Pallindrome ";
    cin >> x;

    if (pallindrome(x))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

// In Leetcode the reversed number variable type should be double .......