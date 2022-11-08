// Stack using class

#include <iostream>
#include <stack>
using namespace std;

class Stack
{
    // properties
public:
    int *arr;
    int top;
    int size;

    Stack(int size)
    {
        this->size = size;
        arr = new int(size);
        top = -1;
    }

    int push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack Overflow" << endl;
        }
    }

    int pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow" << endl;
        }
        else
        {
            top--;
        }
    }

    int peek()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << "Stack is empty" << endl;
        }
    }

    bool isempty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    Stack st(5);

    st.push(22);
    st.push(69);
    st.push(44);
    st.push(92);
    st.push(59);
    st.push(14);

    cout << "Top before pop " << st.peek() << endl;
    st.pop();
    cout << "Top after pop " << st.peek() << endl;
    st.pop();
    cout << "Top after pop " << st.peek() << endl;
    st.pop();
    // cout << "Top after pop " << st.peek() << endl;
}