#include <iostream>
using namespace std;

void callByValue(int m)
{
    m = m + 5;
    cout << "Value inside the call by value function: " << m << endl;
}

void callByRefrence(int *m)
{
    *m = *m + 5;
    cout << "Value inside the call by Refrence function: " << *m << endl;
}

int main()
{
    int n = 5;
    cout << "Value before function calling: " << n << endl;
    callByValue(n);
    cout << "value after calling by Value: " << n << endl;
    callByRefrence(&n);
    cout << "value after calling by Refrence: " << n << endl;
}