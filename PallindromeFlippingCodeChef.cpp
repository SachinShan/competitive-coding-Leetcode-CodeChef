#include <iostream>
using namespace std;

bool checkPallindrome(string st)
{
    string tem = "";

    // for(int i=0; i<st.size(); i++){
    //     tem = tem +
    // }
    for (int i = st.size() - 1; i >= 0; i--)
    {
        tem = tem + st[i];
    }

    if (tem == st)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    // your code goes here
    int t, n;
    cin >> t;
    while (t--)
    {
        string s;
        char temp;
        int flag = 0;
        cin >> n;
        cin >> s;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;

                if (checkPallindrome(s))
                {
                    flag = 1;
                    break;
                }
            }
        }

        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}

// More optimal solution which applies the logic that... for a string of 0 & 1 to be pallindrome atleast either of
//  the 0 or 1 should occur even number of times......

#include <iostream>
#include <string>
#include <bits/stdc++.h>
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
        string s;
        cin >> s;
        int temp1 = 0, temp2 = 0;
        for (int j = 0; j < n; j++)
        {
            if (s[j] == '0')
            {
                temp1++;
            }
            else if (s[j] == '1')
            {
                temp2++;
            }
        }
        if (temp1 % 2 == 0 || temp2 % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
