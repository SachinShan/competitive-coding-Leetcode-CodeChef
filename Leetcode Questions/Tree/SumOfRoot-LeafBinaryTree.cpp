
class Solution
{
public:
    int ans = 0;

    void traverse(TreeNode *root, int n)
    {
        if (root == NULL)
        {
            return;
        }

        if (root->left == NULL && root->right == NULL)
        {
            ans += n * 2 + root->val;
            return;
        }

        traverse(root->left, n * 2 + root->val);
        traverse(root->right, n * 2 + root->val);
    }

    int sumRootToLeaf(TreeNode *root)
    {
        if (root == NULL)
        {
            return 0;
        }

        traverse(root, 0);

        return ans;
    }
};

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
    int ans = 0;
    int convert(long long n)
    {
        int dec = 0, i = 0, rem;

        while (n != 0)
        {
            rem = n % 10;
            n /= 10;
            dec += rem * pow(2, i);
            ++i;
        }
        return dec;
    }

    void traverse(TreeNode *root, long long n)
    {
        if (root == NULL)
        {
            return;
        }

        n = n * 10 + root->val;

        traverse(root->left, n);
        traverse(root->right, n);
        if (root->left == NULL && root->right == NULL)
        {
            cout << n << endl;
            ans += convert(n);
            return;
        }
    }

    int sumRootToLeaf(TreeNode *root)
    {
        if (root == NULL)
        {
            return 0;
        }

        traverse(root, 0);

        return ans;
    }
};

// if(root==NULL){
//             return;
//         }
//         if(root->left==NULL && root->right==NULL){
//             sum+= (val*2 + root->val);
//             return;
//         }