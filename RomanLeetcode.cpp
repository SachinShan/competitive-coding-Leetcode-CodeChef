#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<char, int> mapping;

    string roman;
    cout << "Enter the Roman Numerals: ";
    cin >> roman;
    int result = 0;

    // mapping["I"] = 1;
    // mapping["V"] = 5;
    // mapping["X"] = 10;
    // mapping["L"] = 50;
    // mapping["C"] = 100;
    // mapping["D"] = 500;
    // mapping["M"] = 1000;

    mapping.insert({'I', 1});
    mapping.insert({'V', 5});
    mapping.insert({'X', 10});
    mapping.insert({'L', 50});
    mapping.insert({'C', 100});
    mapping.insert({'D', 500});
    mapping.insert({'M', 1000});

    result = mapping[roman[roman.size() - 1]];

    for (int i = roman.size() - 2; i >= 0; i--)
    {
        // if (result == 0)
        // {
        //     result = mapping[roman[i]];
        // }
        if (mapping[roman[i]] < mapping[roman[i - 1]])
        {
            result = result - mapping[roman[i]];
        }
        else
        {
            result = result + mapping[roman[i]];
        }
    }

    cout << "The integer number to the corresponding Roman number is: " << result;
}