#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int isLarge(vector<int> &arr, int siz)
{

    int num = arr[0];
    for (int i = 0; i < siz; i++)
    {
        num = max(num, arr[i]);
    }
    return num;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int siz;
        cin >> siz;

        vector<int> arr(siz);
        vector<int> brr(siz);

        for (int i = 0; i < siz; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < siz; i++)
        {
            cin >> brr[i];
        }

        for (int i = 0; i < siz; i++)
        {
            if (arr[i] > brr[i])
            {
                int temp = arr[i];
                arr[i] = brr[i];
                brr[i] = temp;
            }
        }
        int a = isLarge(arr, siz);
        int b = isLarge(brr, siz);
        // cout << a << "a" << b << "b" << endl;
        if (arr[siz - 1] == a && brr[siz - 1] == b)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}