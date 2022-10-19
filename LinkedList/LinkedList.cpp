#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void InsertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void InsertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
}

void print(Node *&head)
{

    Node *tem = head;
    while (tem != NULL)
    {
        cout << tem->data << " ";
        tem = tem->next;
    }
    cout << endl;
}

int main()
{
    Node *node1 = new Node(10);
    cout << node1->data << endl;
    cout << node1->next << endl;

    Node *head = node1;
    Node *tail = node1;

    InsertAtHead(head, 20);
    print(head);

    InsertAtHead(head, 30);
    print(head);

    InsertAtHead(head, 40);
    print(head);

    InsertAtTail(tail, 50);
    print(head);

    InsertAtTail(tail, 60);
    print(head);

    InsertAtTail(tail, 70);
    print(head);
}
