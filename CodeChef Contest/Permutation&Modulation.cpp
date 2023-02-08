#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int size;
        cin >> size;

        int j = 1;
        while (j <= size)
        {
            if (j == size)
            {
                cout << "1";
            }
            else
            {
                cout << j + 1 << " ";
            }
            j++;
        }
        cout << endl;
    }
    return 0;
}
