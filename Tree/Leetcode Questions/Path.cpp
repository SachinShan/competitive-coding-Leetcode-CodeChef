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
private:
    void path(TreeNode *root, string op, vector<string> &ans)
    {
        if (root == NULL)
        {
            return;
        }
        op = op + to_string(root->val);
        path(root->left, op + "->", ans);
        path(root->right, op + "->", ans);

        if (root->left == NULL && root->right == NULL)
        {
            ans.push_back(op);
        }
    }

public:
    vector<string> binaryTreePaths(TreeNode *root)
    {
        // if(root == NULL){
        //     return 0;
        // }
        vector<string> ans;
        path(root, "", ans);
        return ans;
    }
};