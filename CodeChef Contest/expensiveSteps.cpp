#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main()
{
    // youc code goes hece
    int h;
    cin >> h;
    while (h--)
    {
        int limit;
        cin >> limit;
        int a, b, c, s;
        cin >> a >> b >> c >> s;
        int dist1 = abs(a - c) + abs(s - b);
        int x = min(min(a, limit - a + 1), min(b, limit - b + 1));
        int y = min(min(c, limit - c + 1), min(s, limit - s + 1));
        cout << min(dist1, x + y) << endl;
    }
    return 0;
}