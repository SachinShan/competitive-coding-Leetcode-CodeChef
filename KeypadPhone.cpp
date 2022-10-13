#include <iostream>
#include <vector>
using namespace std;

vector<string> ans;
string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void typed(string digit, string output, int index)
{
    if (index >= digit.length())
    {
        ans.push_back(output);
        return;
    }
    int number = digit[index] - '0'; // This is the sytax for fetching number from string data type numeral
    string value = mapping[number];

    for (int i = 0; i < value.length(); i++)
    {
        output.push_back(value[i]);
        typed(digit, output, index + 1);
        output.pop_back(); // Backtracking so as to change "ad" to "a" so that next letter can be joined i.e. "ae"
    }
}

int main()
{
    int index = 0;
    string digit, output = "";
    cout << "Type the number on the keypad ";
    cin >> digit;
    typed(digit, output, index);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}