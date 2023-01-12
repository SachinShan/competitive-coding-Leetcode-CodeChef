#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int x = (i * 2) + 1;
        arr.push_back(x);
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    int m = n - 1, i = 0;
    int count = 0;
    while (i < m)
    {
        while (arr[i] != arr[m])
        {
            arr[i]++;
            arr[m]--;

            count++;
        }
        i++;
        m--;
    }
    cout << "Array after the operation ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}