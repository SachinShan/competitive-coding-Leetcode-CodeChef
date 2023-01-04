class Solution
{
public:
    bool path(TreeNode *root, int sum, int target)
    {
        if (root == NULL)
        {
            return false;
        }

        sum = sum + root->val;

        if (root->left == NULL && root->right == NULL)
        {
            return sum == target;
        }
        return path(root->left, sum, target) || path(root->right, sum, target);
    }

    bool hasPathSum(TreeNode *root, int targetSum)
    {
        return path(root, 0, targetSum);
    }
};