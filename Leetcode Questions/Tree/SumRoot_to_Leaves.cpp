
class Solution
{
public:
    int sum = 0;

    void number(TreeNode *root, int digit)
    {
        if (root == NULL)
        {
            return;
        }
        digit = digit * 10 + root->val;

        number(root->left, digit);
        number(root->right, digit);

        if (root->left == NULL && root->right == NULL)
        {
            sum += digit;
        }

        return;
    }

    int sumNumbers(TreeNode *root)
    {
        if (root == NULL)
        {
            return 0;
        }

        number(root, 0);

        return sum;
    }
};