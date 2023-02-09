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
    int countNodes(TreeNode *root)
    {
        if (root == NULL)
            return 0;

        int ans = 1 + countNodes(root->left) + countNodes(root->right);
        return ans;
    }

    bool isCBT(TreeNode *root, int ind, int count)
    {
        if (root == NULL)
        {
            return true;
        }

        if (ind >= count)
        {
            return false;
        }

        bool left = isCBT(root->left, 2 * ind + 1, count);
        bool right = isCBT(root->right, 2 * ind + 2, count);

        return (left && right);
    }

    bool isCompleteTree(TreeNode *root)
    {
        if (root == NULL)
            return true;
        ;

        int count = countNodes(root);

        return isCBT(root, 0, count);
    }
};