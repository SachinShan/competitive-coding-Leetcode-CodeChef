#include <iostream>
using namespace std;

class base
{
public:
    virtual void print()
    {
        cout << "Hello this is the base class" << endl;
    }
};

class derived : public base
{
public:
    void print()
    {
        cout << "This the the derived class and virtual function" << endl;
    }
};

int main()
{
    base b;
    b.print();

    derived c;
    c.print();
}