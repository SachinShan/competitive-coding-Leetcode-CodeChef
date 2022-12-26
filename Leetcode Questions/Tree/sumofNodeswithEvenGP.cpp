class Solution
{
public:
    int sum = 0;

    void solve(TreeNode *root)
    {

        if (root == NULL)
        {
            return;
        }
        if (root->val % 2 == 0)
        {
            if (root->left != NULL)
            {
                if (root->left->left != NULL)
                {
                    sum += root->left->left->val;
                }
                if (root->left->right != NULL)
                {
                    sum += root->left->right->val;
                }
            }
            if (root->right != NULL)
            {
                if (root->right->left != NULL)
                {
                    sum += root->right->left->val;
                }
                if (root->right->right != NULL)
                {
                    sum += root->right->right->val;
                }
            }
        }
        solve(root->left);
        solve(root->right);
    }

    int sumEvenGrandparent(TreeNode *root)
    {
        if (root == NULL)
        {
            return 0;
        }
        solve(root);
        return sum;
    }
};