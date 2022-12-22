#include <iostream>
using namespace std;

void shellSort(int n, int arr[])
{
    int gap, j;
    for (gap = n / 2; gap > 0; gap = gap / 2)
    {
        for (int i = gap; i < n; i++)
        {
            int temp = arr[i];
            for (j = i; j >= gap && arr[j - gap] > temp; j = j - gap)
            {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
}

void printArray(int n, int arr[])
{
    cout << "Printing the Array" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter the size of the given array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the given array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    shellSort(n, arr);

    printArray(n, arr);

    return 0;
}
