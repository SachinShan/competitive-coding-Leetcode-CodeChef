#include <iostream>
using namespace std;

bool issorted(int a[], int n)
{
    if (n == 0 || n == 1)
    {
        return true;
    }
    if (a[0] > a[1])
    {
        return false;
    }
    else
    {
        bool remainingarr = issorted(a + 1, n - 1);
        return remainingarr;
    }
}

int main()
{
    int n;
    cout << "Enter the size of the array";
    cin >> n;
    int a[n];
    cout << "Enter the elements of the array";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // cout << sort(a, n);
    if (issorted(a, n))
    {
        cout << "Sorted";
    }
    else
    {
        cout << "The given array is not sorted";
    }
}