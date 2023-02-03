/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution
{
public:
    vector<int> ans;
    vector<int> preorder(Node *root)
    {
        if (root == NULL)
        {
            return ans;
        }
        stack<Node *> st;
        st.push(root);

        while (!st.empty())
        {
            Node *curr = st.top();
            st.pop();
            ans.push_back(curr->val);

            vector<Node *>::iterator it = curr->children.end();

            while (it != curr->children.begin())
            {
                it--;
                st.push(*it);
            }
        }
        return ans;
    }
};

// Recursive solution

// class Solution {
// public:
//     vector<int> ans;
//     void preorderTraversal(Node* root){
//         if(root == NULL){
//             return;
//         }

//         ans.push_back(root->val);
//         for(auto s : root->children){
//             preorderTraversal(s);
//         }
//     }

//     vector<int> preorder(Node* root) {
//         if(root == NULL){
//             return ans;
//         }

//         preorderTraversal(root);
//         return ans;
//     }
// };