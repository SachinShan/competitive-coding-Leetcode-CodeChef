#include <iostream>
using namespace std;

int solve(int arr[], int n, int sum)
{
    if (sum == 0)
    {
        return 1;
    }
    if (n == 0)
    {
        return 0;
    }

    return (solve(arr, n - 1, sum) + solve(arr, n - 1, sum - arr[n - 1]));
}

int main()
{
    int n, sum;
    cout << "Enter the size of the aarray";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the sum";
    cin >> sum;

    cout << solve(arr, n, sum);

    // if (solve(arr, n, sum))
    //     cout << "The subset is present";
    // else
    //     cout << "The subset is not present";
}
