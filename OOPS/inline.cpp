

#include <iostream>
using namespace std;
class fun
{
    int a, b, add, sub, mul;
    float div;

public:
    void get();
    void sum();
    void difference();
    void product();
    void division();
};
inline void fun ::get()
{
    cout << "Enter first value :";
    cin >> a;
    cout << "Enter second value :";
    cin >> b;
}
inline void fun ::sum()
{
    add = a + b;
    cout << "Addition of two numbers : " << a + b << "\n";
}
inline void fun ::difference()
{
    sub = a - b;
    cout << "Difference of two numbers :" << a - b << "\n";
}
inline void fun ::product()
{
    mul = a * b;
    cout << "Product of two numbers : " << a * b << "\n";
}
inline void fun ::division()
{
    div = a / b;
    cout << "Division of two numbers : " << a / b << "\n";
}
int main()
{
    cout << "Program using inline function\n";
    fun s;
    s.get();
    s.sum();
    s.difference();
    s.product();
    s.division();
    return 0;
}
