#include <iostream>
using namespace std;

void quickSort(int n, int arr[], int first, int last)
{

    int pivot, i, j;

    if (first < last)
    {
        pivot = first;
        i = first;
        j = last;

        while (i < j)
        {
            while (arr[i] <= arr[pivot] && i < last)
            {
                i++;
            }
            while (arr[j] > arr[pivot])
            {
                j--;
            }

            if (i < j)
            {
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[pivot], arr[j]);

        quickSort(n, arr, first, j - 1);
        quickSort(n, arr, j + 1, last);
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

    quickSort(n, arr, 0, n - 1);

    printArray(n, arr);

    return 0;
}
