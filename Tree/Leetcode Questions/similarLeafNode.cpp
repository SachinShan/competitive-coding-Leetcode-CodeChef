/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    void getleaves(TreeNode *root, vector<int> &vec)
    {
        if (root == NULL)
        {
            return;
        }
        getleaves(root->left, vec);

        if (root->left == NULL && root->right == NULL)
        {
            vec.push_back(root->val);
        }

        getleaves(root->right, vec);
    }

    bool leafSimilar(TreeNode *root1, TreeNode *root2)
    {
        vector<int> vec1;
        vector<int> vec2;

        getleaves(root1, vec1);
        getleaves(root2, vec2);

        if (vec1 == vec2)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};