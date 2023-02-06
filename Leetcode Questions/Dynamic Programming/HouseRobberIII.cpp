class Solution
{
public:
    pair<int, int> solution(TreeNode *root)
    {
        if (root == NULL)
        {
            return {0, 0};
        }

        pair<int, int> p1 = solution(root->left);
        pair<int, int> p2 = solution(root->right);
        pair<int, int> p;

        p.first = root->val + p1.second + p2.second;
        p.second = max(p1.first, p1.second) + max(p2.first, p2.second);

        return p;
    }

    int rob(TreeNode *root)
    {
        if (root == NULL)
        {
            return 0;
        }

        pair<int, int> p = solution(root);

        return max(p.first, p.second);
    }
};