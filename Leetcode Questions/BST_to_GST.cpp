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
    int x = 0;
    TreeNode *gst(TreeNode *root)
    {
        if (!root)
        {
            return NULL;
        }
        else
        {
            gst(root->right);
            x += root->val;
            root->val = x;
            if (root->left)
                gst(root->left);
        }

        return root;
    }

    TreeNode *bstToGst(TreeNode *root)
    {
        if (!root)
        {
            return NULL;
        }

        return gst(root);
    }
};
