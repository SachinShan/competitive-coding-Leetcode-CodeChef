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
    int findMax(vector<int> &nums, int st, int end)
    {
        int i;
        int maxi = nums[st];
        int maxInd = st;
        for (i = st; i <= end; i++)
        {
            if (nums[i] > maxi)
            {
                maxi = nums[i];
                maxInd = i;
            }
        }
        return maxInd;
    }
    TreeNode *constructTree(vector<int> &nums, int stInd, int endInd)
    {
        if (stInd > endInd)
        {
            return NULL;
        }
        int ind = findMax(nums, stInd, endInd);

        TreeNode *root = new TreeNode(nums[ind]);
        if (stInd == endInd)
        {
            return root;
        }
        root->left = constructTree(nums, stInd, ind - 1);
        root->right = constructTree(nums, ind + 1, endInd);

        return root;
    }

    TreeNode *constructMaximumBinaryTree(vector<int> &nums)
    {

        TreeNode *root = constructTree(nums, 0, nums.size() - 1);
        return root;
    }
};