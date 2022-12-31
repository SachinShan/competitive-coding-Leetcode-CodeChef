#include <iostream>
using namespace std;

class student
{
public:
    int roll_no;
    int uid;

    student()
    {
        roll_no = 10;
        uid = 2389758;
    }
};

int main()
{
    student s;

    cout << s.roll_no << endl;
    cout << s.uid << endl;

    // this is the part of Copy Constructors Calling.

    student s1(s);

    cout << s1.roll_no << endl;
    cout << s1.uid << endl;
}