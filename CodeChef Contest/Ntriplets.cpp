#include <iostream>
using namespace std;

int tidng(int df)
{
    if (df <= 1)
    {
        return false;
    }
    for (int i = 2; i * i < df; i++)
    {
        if (df % i == 0)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int gfg;
        cin >> gfg;
        int c = tidng(gfg);
        if (c == -1)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << c << " " << (gfg / c) << " " << 1 << endl;
        }
    }

    return 0;
}
