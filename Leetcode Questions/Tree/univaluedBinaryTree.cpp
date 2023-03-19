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
    bool preorder(TreeNode *root, int n)
    {
        if (root == NULL)
        {
            return true;
        }

        if (root->val != n)
        {
            return false;
        }
        return preorder(root->left, n) && preorder(root->right, n);
    }

    bool isUnivalTree(TreeNode *root)
    {
        if (root == NULL)
        {
            return true;
        }
        return preorder(root, root->val);
    }
};