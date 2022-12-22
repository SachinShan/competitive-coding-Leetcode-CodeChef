#include <iostream>
using namespace std;

void merging(int arr[], int l, int r)
{
    int mid = (l + r) / 2;

    int len1 = mid - l + 1, len2 = r - mid;

    int *first = new int[len1];
    int *sec = new int[len2];

    int mainarrindex = l;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainarrindex++];
    }

    mainarrindex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        sec[i] = arr[mainarrindex++];
    }

    int indx1 = 0;
    int indx2 = 0;
    mainarrindex = l;

    while (indx1 < len1 && indx2 < len2)
    {
        if (first[indx1] < sec[indx2])
        {
            arr[mainarrindex++] = first[indx1++];
        }
        else
        {
            arr[mainarrindex++] = sec[indx2++];
        }
    }

    while (indx1 < len1)
    {
        arr[mainarrindex++] = first[indx1++];
    }
    while (indx2 < len2)
    {
        arr[mainarrindex++] = sec[indx2++];
    }
}

void mergeSort(int arr[], int left, int right)
{

    if (left >= right)
    {
        return;
    }
    int mid = (left + right) / 2;

    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);

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