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
// class Solution {
// public:
//     TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {

//     }
// };

class Solution
{
public:
    TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder)
    {

        if (inorder.size() != postorder.size())
        {
            return NULL;
        }

        map<int, int> mapp;
        for (int i = 0; i < inorder.size(); i++)
        {
            mapp[inorder[i]] = i;
        }

        return buildTreePost(inorder, 0, inorder.size() - 1, postorder, 0, postorder.size() - 1, mapp);
    }

    TreeNode *buildTreePost(vector<int> &inorder, int inStart, int inEnd, vector<int> &postorder, int postStart, int postEnd, map<int, int> &mapp)
    {

        if (postStart > postEnd || inStart > inEnd)
        {
            return NULL;
        }

        TreeNode *root = new TreeNode(postorder[postEnd]);

        int indRoot = mapp[postorder[postEnd]];
        int numsLeft = indRoot - inStart;

        root->left = buildTreePost(inorder, inStart, indRoot - 1, postorder, postStart, postStart + numsLeft - 1, mapp);

        root->right = buildTreePost(inorder, indRoot + 1, inEnd, postorder, postStart + numsLeft, postEnd - 1, mapp);

        return root;
    }
};
