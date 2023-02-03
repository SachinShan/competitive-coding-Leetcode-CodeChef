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
    vector<vector<int>> ans;

    vector<vector<int>> levelOrder(Node *root)
    {
        if (root == NULL)
        {
            return ans;
        }
        queue<Node *> st;
        st.push(root);

        while (!st.empty())
        {
            int n = st.size();
            vector<int> temp;

            for (int i = 0; i < n; i++)
            {
                Node *curr = st.front();
                st.pop();

                for (auto i : curr->children)
                {
                    st.push(i);
                }
                temp.push_back(curr->val);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
