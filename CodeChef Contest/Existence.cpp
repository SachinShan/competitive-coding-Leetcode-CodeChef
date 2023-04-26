#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        long long first, sec;
        cin >> first >> sec;

        // long long lhs = pow(first, 4) + 4*(pow(sec, 2));
        // long long rhs = 4*(pow(first, 2))*sec;

        // if(lhs == rhs){
        //     cout<<"YES"<<endl;
        // }
        // else{
        //     cout<<"NO"<<endl;
        // }

        long long a = first * first;
        long long b = 2 * sec;
        if (a == b)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

        // long long c = a/b;
        // long long d = sec/a;

        // if(c == 1-d){
        //     cout<<"YES"<<endl;
        // }
        // else{
        //     cout<<"NO"<<endl;
        // }
    }
    return 0;
}
