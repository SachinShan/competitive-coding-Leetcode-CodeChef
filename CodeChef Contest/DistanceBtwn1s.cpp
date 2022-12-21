
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int d;
    cin >> d;
    while (d--)
    {
        int n;
        cin >> n;
        string b;
        cin >> b;
        stack<char> akdjfiosd;
        int mark = 0;
        for (int i = 0; i < n; i++)
        {
            if (!akdjfiosd.empty())
            {
                if (b[i] == '1' && akdjfiosd.top() == '1')
                {
                    mark = 1;
                    break;
                }
                else if (b[i] == '0' && akdjfiosd.top() == '0')
                    akdjfiosd.pop();
                else
                    akdjfiosd.push(b[i]);
            }
            else
                akdjfiosd.push(b[i]);
        }
        if (mark)
            cout << 1 << endl;
        else
            cout << 2 << endl;
    }
    return 0;
}