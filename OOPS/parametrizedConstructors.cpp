#include <iostream>
using namespace std;

class student
{
public:
    int roll_no;
    int uid;

    student(int a, int b)
    {
        roll_no = a;
        uid = b;
    }
};

int main()
{
    student s(10, 9382479);

    cout << s.roll_no << endl;
    cout << s.uid << endl;
}