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
    vector<vector<int>> findpath(TreeNode *root, int sum, int targetSum, vector<int> &path, vector<vector<int>> &allpath)
    {
        if (root == NULL)
        {
            return allpath;
        }

        path.push_back(root->val);
        sum += root->val;

        if (root->left == NULL && root->right == NULL)
        {
            if (sum == targetSum)
            {
                allpath.push_back(path);
            }
        }
        else
        {
            findpath(root->left, sum, targetSum, path, allpath);
            findpath(root->right, sum, targetSum, path, allpath);
        }

        path.pop_back();
        return allpath;
    }

    vector<vector<int>> pathSum(TreeNode *root, int targetSum)
    {
        vector<int> path;
        vector<vector<int>> allpath;

        return findpath(root, 0, targetSum, path, allpath);
    }
};
