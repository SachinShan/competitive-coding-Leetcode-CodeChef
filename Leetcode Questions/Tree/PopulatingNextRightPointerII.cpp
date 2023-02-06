/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution
{
public:
    Node *connect(Node *root)
    {
        if (!root)
        {
            return root;
        }
        vector<Node *> row;
        queue<Node *> q;
        q.push(root);
        int count = 1;

        while (!q.empty())
        {
            if (q.front()->left)
            {
                q.push(q.front()->left);
            }
            if (q.front()->right)
            {
                q.push(q.front()->right);
            }
            row.push_back(q.front()), q.pop();

            if (--count == 0)
            {
                count = q.size();
                for (int i = 0; i < row.size() - 1; i++)
                {
                    row[i]->next = row[i + 1];
                    cout << row[i]->val << " ";
                }
                row.clear();
            }
            cout << endl;
        }
        return root;
    }
};