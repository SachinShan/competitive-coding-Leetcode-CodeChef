class Solution {
public:
    // vector<int> preorderTraversal(TreeNode* root) {
        
    // }
    vector<int> ans;

    void preorder(TreeNode *root){
            if(root == NULL){
            return;
        }
        ans.push_back(root->val);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
    
    vector<int> preorderTraversal(TreeNode* root) {
    
        preorder(root);
        return ans;
        

    }
};