class Solution
{
public:
    TreeNode *searchBST(TreeNode *root, int val)
    {
        while (root != NULL && root->val != val)
        {
            // if(root->val < val){
            //     root = root->right;
            // }
            // else{
            //     root = root->left;
            // }

            // This part can also be coded as:
            root = (val > root->val) ? root->right : root->left;
        }
        return root;
    }
};