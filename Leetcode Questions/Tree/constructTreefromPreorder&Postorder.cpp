
class Solution
{
public:
    TreeNode *constructFromPrePost(vector<int> &preorder, vector<int> &postorder)
    {
        return buildTree(preorder, 0, preorder.size() - 1, postorder, 0, preorder.size() - 1);
    }

    TreeNode *buildTree(vector<int> &pre, int prestart, int preend, vector<int> &post, int poststart, int postend)
    {
        if (prestart > preend)
        {
            return NULL;
        }
        TreeNode *root = new TreeNode(pre[prestart]);

        if (prestart == preend)
        {
            return root;
        }

        int postindex = poststart;
        while (post[postindex] != pre[prestart + 1])
        {
            postindex++;
        }

        int len = postindex - poststart + 1;
        root->left = buildTree(pre, prestart + 1, prestart + len, post, poststart, postindex);
        root->right = buildTree(pre, prestart + len + 1, preend, post, postindex + 1, postend - 1);

        return root;
    }
};