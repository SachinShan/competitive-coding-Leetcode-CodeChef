#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;

    q.push(5);
    q.push(69);
    q.emplace();
    cout << "Size of the queue" << q.size() << endl;

    q.pop();
    cout << "Size of the queue" << q.size() << endl;
}