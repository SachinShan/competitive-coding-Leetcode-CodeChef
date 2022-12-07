#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int k;
    cin >> k;
    while (k--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        int vec[x];
        int jod = 0;
        int niyatank = 0;
        for (int i = 0; i < x; i++)
        {
            cin >> vec[i];

            if (y - vec[i] > z)
            {
                jod = jod + y;
                niyatank += z;
            }
            else
            {
                jod += vec[i];
            }
        }

        cout << jod - niyatank << endl;
    }
    return 0;
}