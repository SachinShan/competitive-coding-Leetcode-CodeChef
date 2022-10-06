#include <iostream>
using namespace std;

string shift(string s)
{
    if (s.length() == 0)
    {
        return "";
    }
    char temp = s[0];
    string ans = shift(s.substr(1));

    if (temp == 'x' || temp == 'X')
    {
        return ans + temp;
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
    cout << shift(s);
}