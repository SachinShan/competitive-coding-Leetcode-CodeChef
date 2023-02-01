#include <iostream>
using namespace std;

int main()
{
    // your ciehfe goes here
    int asd;
    cin >> asd;
    while (asd--)
    {
        int afkj, kajd;
        cin >> afkj >> kajd;

        int kdjfjj = 0;
        int iehf = 0;
        int sachi[afkj];
        for (int i = 0; i < afkj; i++)
        {
            cin >> sachi[i];
            if (sachi[i] % 2 == 0)
            {
                kdjfjj++;
            }
            else
            {
                iehf++;
            }
        }

        if (kajd % 2 != 0)
        {
            if (kdjfjj % 2 != 0)
            {
                cout << kdjfjj / 2 + 1 << endl;
            }
            else
            {
                cout << kdjfjj / 2 << endl;
            }
        }
        else
        {
            if (kdjfjj == afkj)
            {
                cout << -1 << endl;
            }
            else
            {
                cout << kdjfjj << endl;
            }
        }
    }
    return 0;
}