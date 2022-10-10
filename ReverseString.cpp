// two different approach...

#include <iostream>
using namespace std;

void reverse(string st)
{
    if (st.length() == 0)
    {
        return;
    }
    int n = st.length();
    // cout << n;
    cout << st[n - 1];
    reverse(st.substr(0, n - 1));
}

int main()
{
    string st;
    cout << "Enter the string you want to reverse ";
    cin >> st;
    reverse(st);
}

// #include <iostream>
// #include <string>

// using namespace std;

// void reverse(string s)
// {
//     if (s.length() == 0)
//     {
//         return;
//     }

//     string rem = s.substr(1);
//     reverse(rem);
//     cout << s[0];
// }

// int main()
// {
//     string s;
//     cin >> s;

//     reverse(s);
// }