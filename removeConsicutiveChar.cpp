#include <iostream>
using namespace std;

string removeDp(string s)
{
    if (s.length() == 0)
    {
        return "";
    }
    char temp = s[0];
    string ans = removeDp(s.substr(1));

    if (temp == ans[0])
    {
        return ans;
    }
    else
    {
        return temp + ans;
    }
}

int main()
{
    string s;
    cout << "Enter the string with duplicates.";
    cin >> s;
    cout << removeDp(s);
}