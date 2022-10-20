// This code is not working properly

#include <iostream>
using namespace std;

void selectionSort(int n, int arr[])
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
            }
        }
        swap(arr[i], min);
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

    selectionSort(n, arr);

    printArray(n, arr);

    return 0;
}
