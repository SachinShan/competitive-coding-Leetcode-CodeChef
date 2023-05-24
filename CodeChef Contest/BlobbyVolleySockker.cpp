#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string chance;
        cin >> chance;
        int ravi = 0, viv = 0;

        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            char c = chance[i];
            if (flag)
            {
                if (c == 'A')
                {
                    ravi++;
                }
                else
                {
                    flag = !flag;
                }
            }
            else
            {
                if (c == 'B')
                {
                    viv++;
                }
                else
                {
                    flag = !flag;
                }
            }
        }
        cout << ravi << " " << viv << endl;
    }
    return 0;
}
