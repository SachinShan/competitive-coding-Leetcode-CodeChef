#include <iostream>
#include <stack>
using namespace std;

bool isValid(string s)
{
    if (s.size() == 0)
    {
        return false;
    }
    stack<char> brackets;

    for (int i = 0; i < s.size(); i++)
    {
        if (brackets.size() == 0)
        {
            brackets.push(s[i]);
            continue;
        }
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            brackets.push(s[i]);
        }

        if (s[i] == ')')
        {
            if (brackets.top() == '(')
                brackets.pop();
            else
                brackets.push(s[i]);
        }

        if (s[i] == '}')
        {
            if (brackets.top() == '{')
                brackets.pop();
            else
                brackets.push(s[i]);
        }

        if (s[i] == ']')
        {
            if (brackets.top() == '[')
                brackets.pop();
            else
                brackets.push(s[i]);
        }

        // if (s[i] == ')' && brackets.top() == '(')
        // {
        //     brackets.pop();
        // }
        // if (s[i] == '}' && brackets.top() == '{')
        // {
        //     brackets.pop();
        // }
        // if (s[i] == ']' && brackets.top() == '[')
        // {
        //     brackets.pop();
        // }
    }

    cout << brackets.size() << endl;
    if (brackets.size() == 0)
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
    string s;
    cin >> s;
    cout << isValid(s);
}