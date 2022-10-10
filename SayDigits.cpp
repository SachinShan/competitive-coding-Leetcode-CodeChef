#include <iostream>
using namespace std;
string nums[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
void say(int n)
{
    if (n == 0)
    {
        return;
    }
    say(n / 10);
    int temp = n % 10;
    cout << nums[temp] << " ";
}

int main()
{
    int n;
    cout << "Enter the number";
    cin >> n;
    say(n);
}