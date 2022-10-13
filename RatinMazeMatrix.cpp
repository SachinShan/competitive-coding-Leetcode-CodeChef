#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int maze[1000][1000];
int ans[1000][1000];

bool isSafe(int i, int j, int n)
{
    if (i < n && j < n && maze[i][j] == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool ratmaze(int i, int j, int n)
{
    if (i == n - 1 && j == n - 1)
    {
        ans[i][j] = 1;
        return true;
    }
    if (isSafe(i, j, n))
    {
        ans[i][j] = 1;
        if (ratmaze(i + 1, j, n))
        {
            return true;
        }
        if (ratmaze(i, j + 1, n))
        {
            return true;
        }
        ans[i][j] = 0;
        return false;
    }
    else
    {
        return false;
    }
}

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cout << "Enter the size of the nXn matrix";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // cout << "kdk";
            cin >> maze[i][j];
            ans[i][j] = 0;
        }
    }

    ratmaze(0, 0, n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}