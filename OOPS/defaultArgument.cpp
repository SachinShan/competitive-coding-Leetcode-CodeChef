#include <iostream>
using namespace std;

int solve(int a, int b, int c = 10)
{
    return a + b + c;
}

int main()
{
    int a, b;
    a = 4;
    b = 5;
    cout << "The sum of the given number and 10 is: " << solve(a, b) << endl;
}