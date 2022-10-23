#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Constructor .......  by using this we don't need to use malloc function in the main function
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node *&head, int d)
{

    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void inserAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
}

void print(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node *reverse(Node *head)
{

    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    Node *prev = NULL;
    Node *curr = head;
    Node *forward = NULL;

    while (curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}

int main()
{
    Node *node1 = new Node(10);
    cout << node1->data << endl;
    cout << node1->next << endl;

    Node *head = node1;
    Node *tail = node1;

    insertAtHead(head, 12);
    print(head);

    insertAtHead(head, 15);
    print(head);

    inserAtTail(tail, 35);
    print(head);

    inserAtTail(tail, 55);
    print(head);

    // cout << head;
    // cout << reverse(head);

    cout << "Reversed Linked List is : " << endl;
    print(reverse(head));

    Node *tempp = reverse(head);
    print(tempp);
}