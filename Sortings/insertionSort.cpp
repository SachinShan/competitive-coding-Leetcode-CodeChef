#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void insertionSort(int n, int arr[])
{
    cout << "This array is being sorted using Insertion sort" << endl;
    int temp, j;
    for (int i = 1; i < n; i++)
    {
        temp = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = temp;
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

    insertionSort(n, arr);

    printArray(n, arr);

    return 0;
}
