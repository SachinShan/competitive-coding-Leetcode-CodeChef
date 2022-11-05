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

void insertNode(Node *&tail, int element, int d)
{
    if (tail == NULL)
    {
        Node *newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        Node *curr = tail;

        while (curr->data != element)
        {
            curr = curr->next;
        }

        Node *temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

bool floydDetect(Node *head)
{
    Node *slow = head;
    Node *fast = head;

    while (slow != NULL && fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }

        slow = slow->next;

        if (slow == fast)
        {
            cout << "found" << endl;
            return true;
        }
        cout << "check" << endl;
    }

    cout << "check kji" << endl;
    return false;
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

    insertAtHead(head, 55);
    print(head);

    insertAtHead(head, 30);
    print(head);

    insertAtHead(head, 84);
    print(head);

    insertNode(head, 84, 3);
    print(head);

    insertNode(head, 3, 5);
    print(head);

    insertNode(head, 5, 7);
    print(head);

    insertNode(head, 7, 9);
    print(head);

    insertNode(head, 5, 6);
    print(head);

    cout << floydDetect(head) << endl;

    if (floydDetect(head))
    {
        cout << "Loop Detected";
    }
    else
    {
        cout << "Loop not Detected";
    }
}