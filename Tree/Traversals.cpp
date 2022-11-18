#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node *buildtree(node *root)
{
    cout << "Enter the data: ";
    int data;
    cin >> data;
    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter the data for inserting in left: ";
    root->left = buildtree(root->left);
    cout << "Enter the data for inserting in right: ";
    root->right = buildtree(root->right);
    return root;
}

void inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main()
{
    node *root = NULL;
    root = buildtree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    cout << endl
         << "Inorder Traversal:" << endl;
    inorder(root);

    cout << endl
         << "Preorder Traveresal" << endl;
    preorder(root);

    cout << endl
         << "Postorder Traversal" << endl;
    postorder(root);

    return 0;
}

// 1 2 3 8 -1 -1 9 -1 -1 4 10 -1 -1 11 -1 -1 5 6 12 -1 -1 -1 7 -1 -1