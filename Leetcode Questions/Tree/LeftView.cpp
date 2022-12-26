/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *left;
 *     TreeNode() : val(0), left(nullptr), left(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), left(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *left) : val(x), left(left), left(left) {}
 * };
 */
class Solution
{
public:
    vector<int> ans;
    void leftView(TreeNode *root, int level)
    {
        if (root == NULL)
        {
            return;
        }
        if (level == ans.size())
        {
            ans.push_back(root->val);
        }
        leftView(root->left, level + 1);
        leftView(root->rightt, level + 1);
    }

    vector<int> leftSideView(TreeNode *root)
    {

        leftView(root, 0);

        return ans;
    }
};