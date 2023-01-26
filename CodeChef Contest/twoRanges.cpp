#include <iostream>
#include <set>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        set<int> data;
        int p, q, r, s;
        cin >> p >> q >> r >> s;

        for (int i = p; i <= q; i++)
        {
            data.insert(i);
        }
        for (int i = r; i <= s; i++)
        {
            data.insert(i);
        }

        cout << data.size() << endl;
    }
    return 0;
}
