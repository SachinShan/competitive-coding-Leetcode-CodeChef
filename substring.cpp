#include <iostream>
using namespace std;

void substring(string inp, string out)
{
    if (inp.length() == 0)
    {
        if (out.length() != 0)
        {
            cout << out << endl;
        }
        return;
    }
    string notpick = out;
    string pick = out + inp[0];
    inp = inp.substr(1);
    substring(inp, notpick);
    substring(inp, pick);
}

int main()
{
    string inp, out;
    cout << "Enter the major string.";
    cin >> inp;
    // out = "";
    substring(inp, out);
}