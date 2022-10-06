#include <iostream>
using namespace std;

void toi(int n, char A, char B, char C)
{
    if (n == 0)
    {
        return;
    }
    if (n == 1)
    {
        cout << "Move disk from peg " << A << " to peg " << C << endl;
        return;
    }
    toi(n - 1, A, C, B);
    cout << "Move disk from peg " << A << " to peg " << C << endl;
    toi(n - 1, B, A, C);
}

int main()
{
    int rods;
    char A, B, C;
    A = 'A';
    B = 'B';
    C = 'C';
    cout << "Enter the number of rods: ";
    cin >> rods;

    toi(rods, A, B, C);
}