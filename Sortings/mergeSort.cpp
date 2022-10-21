#include <iostream>
using namespace std;

void merging(int arr[], int left, int right)
{
}

void mergeSort(int arr[], int left, int right)
{

    if (left > right)
    {
        return;
    }
    int mid = (left + right) / 2;

    mergeSort(arr, left, mid);
    mergeSort(arr, mid, right);

    merging(arr, left, right);
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

    mergeSort(arr, 0, n - 1);

    printArray(n, arr);

    return 0;
}