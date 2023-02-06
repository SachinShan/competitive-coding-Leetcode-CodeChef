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
    vector<int> hold;

    void traverse(TreeNode *root)
    {
        if (root == NULL)
        {
            return;
        }
        hold.push_back(root->val);
        if (root->left)
        {
            traverse(root->left);
        }
        if (root->right)
        {
            traverse(root->right);
        }
    }

    TreeNode *increasingBST(TreeNode *root)
    {
        if (root == NULL)
        {
            return NULL;
        }

        traverse(root);

        sort(hold.begin(), hold.end());

        TreeNode *curr = new TreeNode(hold[0]);
        TreeNode *temp = curr;
        for (int i = 1; i < hold.size(); i++)
        {
            temp->right = new TreeNode(hold[i]);
            temp = temp->right;
        }

        return curr;
    }
};
