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
    int mini = INT_MAX;
    vector<int> temp;
    void store(TreeNode *root)
    {
        if (root == NULL)
        {
            return;
        }

        store(root->left);
        temp.push_back(root->val);
        store(root->right);
    }

    int minDiffInBST(TreeNode *root)
    {
        if (root == NULL)
        {
            return 0;
        }

        store(root);

        sort(temp.begin(), temp.end());

        for (int i = 0; i < temp.size() - 1; i++)
        {
            mini = min(mini, abs(temp[i] - temp[i + 1]));
        }
        return mini;
    }
};
