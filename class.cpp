#include <iostream>
using namespace std;

class Car
{
private:
    int distance;

    struct
    {
        int mileage;
    };

public:
    int fuel;
    Car()
    {
        cout << "Object Created" << endl;
    }

    void fun()
    {
        cout << "Is Running" << endl;
    }
};

int Car::fuel = 34;

int main()
{
    Car c1;
    return 0;
}