#include <iostream>
using namespace std;

class Node
{

public:
    int data;
    Node *next;

    // constructor
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }

    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
    }
};

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

bool isCircular(Node *head)
{
    Node *temp;
    temp = head;

    while (temp == NULL)
    {
        if (temp == head)
        {
            return true;
        }
        if (temp == NULL)
        {
            return false;
        }

        temp = temp->next;
    }
}

void print(Node *&tail)
{
    Node *temp = tail;

    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);

    cout << endl;
}

int main()
{
    Node *tail = NULL;
    Node *head;

    insertNode(tail, 5, 3);
    print(tail);
    head = tail;

    insertNode(tail, 3, 5);
    print(tail);

    insertNode(tail, 5, 7);
    print(tail);

    insertNode(tail, 7, 9);
    print(tail);

    insertNode(tail, 5, 6);
    print(tail);

    if (isCircular(head))
    {
        cout << "Is Circular";
    }
    else
    {
        cout << "Is Not Circula;";
    }
}