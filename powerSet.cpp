// This problem is also known as Subsequence

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
vector<string> res;

void solve(string, string);
int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string ip, op;
    cout << "Enter the SuperSet";
    cin >> ip;

    solve(ip, op);

    sort(res.begin(), res.end());
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << endl;
    }
    return 0;
}

void solve(string ip, string op)
{
    if (ip.length() == 0)
    {
        if (op != "")
        {
            res.push_back(op);
        }
        return;
    }
    string notpick = op;
    string pick = op + ip[0];
    ip = ip.substr(1);
    solve(ip, notpick);
    solve(ip, pick);
}
