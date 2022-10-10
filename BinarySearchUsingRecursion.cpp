#include <iostream>
using namespace std;
// bool issorted(int a[], int n)
// {
//     if (n == 0 || n == 1)
//     {
//         return true;
//     }
//     if (a[0] > a[1])
//     {
//         return false;
//     }
//     else
//     {
//         bool remainingarr = issorted(a + 1, n - 1);
//         return remainingarr;
//     }
// }

int Binary(int a[], int l, int r, int x)
{
    if (l == r)
    {
        return -1;
    }
    int mid = (l + r) / 2;
    if (a[mid] == x)
    {
        return mid;
    }
    else if (x < a[mid])
    {
        Binary(a, l, mid - 1, x);
    }
    else if (x > a[mid])
    {
        Binary(a, mid + 1, r, x);
    }
}

int main()
{
    int n, x, temp;
    cout << "Enter the size of the array";
    cin >> n;
    int a[n];
    cout << "Enter the elements of the array";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // if (issorted(a, n) != 1)
    // {
    //     for (int i = 0; i < n; i++)
    //     {
    //         for (int j = 0; j < n; j++)
    //         {
    //             if (a[i] > a[j])
    //             {
    //                 temp = a[i];
    //                 a[i] = a[j];
    //                 a[j] = temp;
    //             }
    //         }
    //     }
    // }
    cout << "Enter the number to be searched";
    cin >> x;
    int index = Binary(a, 0, n - 1, x);

    if (index == -1)
    {
        cout << "Element not found in the array";
    }
    else
    {
        cout << "Element found at the index " << index << " in the sorted array(ascending order)";
    }
}