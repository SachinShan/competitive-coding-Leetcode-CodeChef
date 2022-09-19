#include <iostream>
using namespace std;

int LinearSearch(int a[], int n, int x)
{

    if (n <= 0)
    {
        return -1;
    }

    if (a[n] == x)
    {
        return n;
    }

    LinearSearch(a, n - 1, x);
}

int main()
{
    int n, x, i, j;
    cout << "Enter the size of the list";
    cin >> n;
    int a[n];
    cout << "Enter the Elements of the list";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the elements to be searched";
    cin >> x;

    int result = LinearSearch(a, n - 1, x);
    if (result == -1)
    {
        cout << "Element not found";
    }
    else
    {
        cout << x << "found at index" << result;
    }
}
