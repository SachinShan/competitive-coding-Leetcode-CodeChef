#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the given array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the values of the given array " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    int sortArray[max + 1];
    for (int i = 0; i <= max; i++)
    {
        sortArray[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        sortArray[arr[i]]++;
    }

    for (int i = 0; i <= max; i++)
    {
        for (int j = 1; j <= sortArray[i]; j++)
        {
            cout << i << " ";
        }
    }
}