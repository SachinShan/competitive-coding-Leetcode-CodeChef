#include <iostream>
using namespace std;

int lenear(int a[], int n, int x, int index)
{
    if (n == 0)
    {
        return -1;
    }
    if (a[0] == x)
    {
        return index;
    }
    lenear(a + 1, n - 1, x, index + 1);
}

int main()
{
    int n, x;
    cout << "Enter the size of the array";
    cin >> n;
    int a[n];
    cout << "Enter the elements of the array";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the number to be searched";
    cin >> x;
    int index = lenear(a, n, x, 0);

    if (index == -1)
    {
        cout << "Element not found in the array";
    }
    else
    {
        cout << "Element found at the index " << index;
    }
}