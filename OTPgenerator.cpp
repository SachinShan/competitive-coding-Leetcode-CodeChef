#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<string> vec;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 != 0)
        {
            vec.push_back((arr[i] * arr[i]));
        }
    }
}