
class Solution
{
public:
    TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
    {
        if (root == NULL)
        {
            return NULL;
        }
        int key = root->val;

        if (key < p->val && key < q->val)
        {
            return lowestCommonAncestor(root->right, p, q);
        }
        if (key > p->val && key > q->val)
        {
            return lowestCommonAncestor(root->left, p, q);
        }
        return root;
    }
};