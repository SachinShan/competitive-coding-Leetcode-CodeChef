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

void InsertAtPosition(Node *&head, Node *&tail, int position, int d)
{
    if (position == 1)
    {
        InsertAtHead(head, d);
        return;
    }
    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    if (temp->next == NULL)
    {
        InsertAtTail(tail, d);
        return;
    }

    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
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

    InsertAtPosition(head, tail, 3, 69);
    print(head);

    InsertAtPosition(head, tail, 1, 96);
    print(head);

    InsertAtPosition(head, tail, 10, 39);
    print(head);
}