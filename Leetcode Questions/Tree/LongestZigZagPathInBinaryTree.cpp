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
    int ans = 0;

    void zigzag(TreeNode *root, int goleft, int cnt)
    {
        if (root == NULL)
        {
            return;
        }
        ans = max(ans, cnt);

        if (goleft)
        {
            zigzag(root->left, false, cnt + 1);
            zigzag(root->right, true, 1);
        }
        else
        {
            zigzag(root->right, true, cnt + 1);
            zigzag(root->left, false, 1);
        }
    }

    int longestZigZag(TreeNode *root)
    {
        if (root == NULL)
        {
            return 0;
        }
        zigzag(root->left, false, 1); // false means don't go left
        zigzag(root->right, true, 1); // true means don't go right
        return ans;
    }
};
