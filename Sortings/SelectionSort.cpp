
#include <iostream>
using namespace std;

// void selectionSort(int n, int arr[])
// {
//     for (int i = 0; i < n - 1; i++)
//     {
//         int min = i + 1;
//         for (int j = i + 1; i < n; j++)
//         {
//             if (arr[j] < arr[min])
//             {
//                 arr[min] = arr[j];
//                 min = j;
//             }
//         }
//         if (arr[i] > arr[min])
//         {
//             swap(arr[i], arr[min]);
//         }
//     }
// }

void selectionSort(int n, int arr[])
{
    for (int i = 0; i < n - 1; i++)
    {

        int min = arr[i + 1];
        int minind = i + 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                minind = j;
            }
        }
        if (arr[i] > arr[minind])
            swap(arr[i], arr[minind]);
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
    cout << "Hello check<" << endl;
    printArray(n, arr);

    return 0;
}
