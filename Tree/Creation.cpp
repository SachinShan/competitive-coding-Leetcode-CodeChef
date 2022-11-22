#include <iostream>
using namespace std;

class Treenode
{
public:
    int data;
    Treenode *left;
    Treenode *right;

    Treenode(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

Treenode *buildtree(Treenode *root)
{
    cout << "Enter the data: ";
    int data;
    cin >> data;
    root = new Treenode(data);

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

int main()
{
    Treenode *root = NULL;
    root = buildtree(root);
    return 0;
}