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
    vector<int> postorder(Node *root)
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

            for (auto i : root->children)
            {
                st.push(i);
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

// Recursive Approach

// class Solution {
// public:
//     vector<int> ans;
//     void postTraversal(Node* root){
//         if(root == NULL){
//             return;
//         }

//         for(auto s : root->children){
//             postTraversal(s);
//         }
//         ans.push_back(root->val);
//     }

//     vector<int> postorder(Node* root) {
//         if(root == NULL){
//             return ans;
//         }

//         postTraversal(root);
//         return ans;
//     }
// };