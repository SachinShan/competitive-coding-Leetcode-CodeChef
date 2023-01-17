class Solution
{
public:
    vector<int> ans;
    void inorder(TreeNode *root)
    {
        if (root == NULL)
        {
            return;
        }

        inorder(root->left);
        ans.push_back(root->val);
        inorder(root->right);
    }

    vector<int> getAllElements(TreeNode *root1, TreeNode *root2)
    {
        if (root1 == NULL && root2 == NULL)
        {
            return ans;
        }

        if (root1)
        {
            inorder(root1);
        }
        if (root2)
        {
            inorder(root2);
        }
        sort(ans.begin(), ans.end());

        return ans;
    }
};