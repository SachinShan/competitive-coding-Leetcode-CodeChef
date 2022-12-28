class Solution
{
public:
    TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder)
    {
        map<int, int> mapp;

        for (int i = 0; i < inorder.size(); i++)
        {
            mapp[inorder[i]] = i;
        }

        TreeNode *root = buildTreePre(preorder, 0, preorder.size() - 1, inorder, 0, inorder.size() - 1, mapp);

        return root;
    }

    TreeNode *buildTreePre(vector<int> &preorder, int preStart, int preEnd, vector<int> &inorder, int inStart, int inEnd, map<int, int> &mapp)
    {

        if (preStart > preEnd || inStart > inEnd)
        {
            return NULL;
        }

        TreeNode *root = new TreeNode(preorder[preStart]);

        int indRoot = mapp[root->val];
        int numsLeft = indRoot - inStart;

        root->left = buildTreePre(preorder, preStart + 1, preStart + numsLeft, inorder, inStart, indRoot - 1, mapp);

        root->right = buildTreePre(preorder, preStart + numsLeft + 1, preEnd, inorder, indRoot + 1, inEnd, mapp);

        return root;
    }
};