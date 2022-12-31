#include <iostream>
using namespace std;

class student
{
public:
    int roll_no;
    int uid;
    string name;

    student(int a, int b)
    {
        roll_no = a;
        uid = b;
    }
    student(int a, int b, string c)
    {
        roll_no = a;
        uid = b;
        name = c;
    }
};

int main()
{
    student s(10, 9382479);
    student m(29, 28092, "Sachin");

    cout << s.roll_no << endl;
    cout << s.uid << endl;

    cout << m.roll_no << endl;
    cout << m.uid << endl;
    cout << m.name << endl;
}