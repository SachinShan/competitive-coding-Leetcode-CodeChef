#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int lel;
    cin >> lel;
    while (lel--)
    {
        int shl, xx;
        cin >> shl >> xx;
        int count = 1;
        if (xx > shl + 1 || xx < 0 && abs(xx) >= shl)
        {
            cout << -1 << endl;
        }
        else
        {
            if (xx > 0)
            {
                for (int i = 0; i < shl; i++)
                {
                    if (count != xx)
                    {
                        cout << '+';
                        count++;
                        continue;
                    }
                    cout << '*';
                }
                cout << endl;
            }
            else
            {
                for (int i = 0; i < shl; i++)
                {
                    if (count != xx)
                    {
                        cout << '-';
                        count--;
                        continue;
                    }
                    cout << '*';
                }
                cout << endl;
            }
        }
    }
}