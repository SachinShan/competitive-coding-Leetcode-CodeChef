// This is a program of function overloading

#include <iostream>
using namespace std;

class shan
{
public:
    int add(int a, int b)
    {
        cout << a + b << endl;
    }
    int add(int a, int b, int c)
    {
        cout << a + b + c << endl;
    }
};

int main()
{
    shan s;
    s.add(2, 5);
    s.add(3, 6, 2);
}