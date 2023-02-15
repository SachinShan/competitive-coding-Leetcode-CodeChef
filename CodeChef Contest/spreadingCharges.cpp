#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int kjd;
    cin >> kjd;
    while (kjd--)
    {
        int bhi;
        cin >> bhi;
        string adkirhgj;
        cin >> adkirhgj;
        int sunya = 0;
        int tgt = 0;
        int bnk = 0;
        int r = 0;
        for (int i = 0; i < bhi; i++)
        {
            if (adkirhgj[i] == '0')
            {
                r++;
            }
            else if (adkirhgj[i] == '+')
            {
                tgt++;
                if (tgt == bnk && (r % 2 != 0))
                {
                    r = 0;
                    tgt = 1;
                    bnk = 0;
                    sunya++;
                }
                else
                {
                    r = 0;
                    bnk = 0;
                    tgt = 1;
                }
            }
            else
            {
                bnk++;
                if (tgt == bnk && (r % 2 != 0))
                {
                    r = 0;
                    bnk = 1;
                    tgt = 0;
                    sunya++;
                }
                else
                {
                    r = 0;
                    bnk = 1;
                    tgt = 0;
                }
            }
        }
        if (r != 0 && tgt == 0 && bnk == 0)
        {
            sunya += r;
        }
        cout << sunya << endl;
    }
    return 0;
}