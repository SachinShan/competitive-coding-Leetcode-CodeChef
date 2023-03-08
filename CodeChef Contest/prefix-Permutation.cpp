#include <iostream>
using namespace std;

void even(int n)
{
    for (int i = 1; i < n; i += 2)
    {
        cout << i + 1 << " " << i << " ";
    }
    cout << endl;
}

void odd(int n)
{
    cout << -1 << endl;
}

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int num;
        cin >> num;
        if (num % 2 == 0)
        {
            even(num);
        }
        else
        {
            odd(num);
        }
    }
    return 0;
}
