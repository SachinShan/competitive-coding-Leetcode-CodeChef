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
}