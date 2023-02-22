#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int lel;
    cin >> lel;
    while (lel--)
    {
        int phle, baad;
        cin >> phle >> baad;
        if (phle + baad > 6)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
