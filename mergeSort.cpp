#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the length of the given array ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the given array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Given array before sorting is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}