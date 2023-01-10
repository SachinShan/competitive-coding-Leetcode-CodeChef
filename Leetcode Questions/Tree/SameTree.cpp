class Solution
{
public:
    bool isSameTree(TreeNode *p, TreeNode *q)
    {
        if (p == NULL && q == NULL)
        {
            return true;
        }
        if (p == NULL || q == NULL)
        {
            return false;
        }
        if (p->val != q->val)
        {
            return false;
        }

        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};

// 51/60 testcase passed

// class Solution {
// public:
//     vector<int> ans1;
//     vector<int> ans2;
//     void inorder(TreeNode *root, vector<int>& ans){
//             if(root == NULL){
//             return;
//         }
//         inorder(root->left, ans);
//         ans.push_back(root->val);
//         inorder(root->right, ans);
//     }

//     bool isSameTree(TreeNode* p, TreeNode* q) {
//         inorder(p, ans1);
//         inorder(q, ans2);
//         int flag = 1;
//         if(ans1.size() == ans2.size()){
//             for(int i=0; i<ans1.size(); i++){
//                 if(ans1[i] != ans2[i])
//                     flag = 0;
//                     break;
//             }
//         }
//         else{
//             flag = 0;
//         }
//         return flag;
//     }
// };