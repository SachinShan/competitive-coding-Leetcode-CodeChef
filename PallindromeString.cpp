#include <iostream>
using namespace std;

bool check(string name, int i, int j)
{
    if (i > j)
    {
        return true;
    }
    if (name[i] != name[j])
    {
        return false;
    }
    else
    {
        return check(name, i + 1, j - 1);
    }
}

int main()
{
    string name;
    cout << "Enter the string to be checked for pallindrome ";
    cin >> name;

    bool isPalindrome = check(name, 0, name.length() - 1);

    if (isPalindrome)
    {
        cout << "The given string is palindrome.";
    }
    else
    {
        cout << "The given string is not a palindrome";
    }
}