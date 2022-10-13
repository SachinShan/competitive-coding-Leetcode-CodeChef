#include <iostream>
#include <vector>
using namespace std;

vector<string> ans;
string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

int typed(string digit, string output, int index);

int main()
{
    int index = 0;
    string digit, output;
    cout << "Type the number on the keypad ";
    cin >> digit;
    typed(digit, output, index);
}