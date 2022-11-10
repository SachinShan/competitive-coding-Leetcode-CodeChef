#include <iostream>
#include <stack>
using namespace std;

int main()
{
    string s = "abbaca";

    stack<char> stac;
    stac.push(s[0]);
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] != stac.top())
        {
            stac.push(s[i]);
            cout << stac.top() << " " << i;
        }
        else
        {
            stac.pop();
            // continue;
        }
    }

    while (!stac.empty())
    {
        cout << stac.top() << " ";
        stac.pop();
    }
}