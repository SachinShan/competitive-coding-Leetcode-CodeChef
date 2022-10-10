#include <iostream>
using namespace std;
int sum = 0;
int sumres(int a[], int n)
{
    if (n == 0)
    {
        return sum;
    }
    sum = sum + a[0];
    sumres(a + 1, n - 1);
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

    cout << "The sum of the given array is" << sumres(a, n);
}
