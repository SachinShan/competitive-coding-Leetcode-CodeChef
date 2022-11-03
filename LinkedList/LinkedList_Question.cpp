// Reversing the Linked List in groups of k

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

Node *reverse(Node *head, int k)
{
    if (head == NULL)
    {
        return NULL;
    }
    Node *next = NULL;
    Node *curr = head;
    Node *prev = NULL;
    int count = 0;

    while (curr != NULL && count < k)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    if (next != NULL)
    {
        head->next = reverse(next, k);
    }

    return prev;
}

int main()
{
    int k;
    Node *node1 = new Node(10);
    cout << node1->data << endl;
    cout << node1->next << endl;

    Node *head = node1;
    Node *tail = node1;

    insertAtHead(head, 12);
    print(head);

    insertAtHead(head, 15);
    print(head);

    insertAtHead(head, 25);
    print(head);

    inserAtTail(tail, 35);
    print(head);

    inserAtTail(tail, 55);
    print(head);

    // cout << head;
    // cout << reverse(head);

    cout << "Enter the group size i.e. k ";
    cin >> k;

    cout << "Reversed Linked List is : " << endl;
    print(reverse(head, k));
}