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
    void inorder(TreeNode *root, vector<TreeNode *> &arr)
    {
        if (!root)
        {
            return;
        }

        inorder(root->left, arr);
        arr.push_back(root);
        inorder(root->right, arr);
    }

    TreeNode *makeTree(vector<TreeNode *> &arr, int i, int j)
    {
        if (i > j)
        {
            return NULL;
        }
        int mid = (i + j) / 2;

        TreeNode *root = arr[mid];
        root->left = makeTree(arr, i, mid - 1);
        root->right = makeTree(arr, mid + 1, j);

        return root;
    }

    TreeNode *balanceBST(TreeNode *root)
    {
        vector<TreeNode *> arr;
        inorder(root, arr);

        return makeTree(arr, 0, arr.size() - 1);
        // return root;
    }
};
