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
    long long kthLargestLevelSum(TreeNode *root, int k)
    {
        if (root == NULL)
        {
            return 0;
        }
        // long long res = 0;
        vector<long long> res;
        queue<TreeNode *> q;
        q.push(root);

        while (!q.empty())
        {
            int n = q.size();
            long long ans = 0;
            for (int i = 1; i <= n; i++)
            {
                TreeNode *temp = q.front();
                q.pop();
                ans += temp->val;
                if (temp->left)
                {
                    q.push(temp->left);
                }
                if (temp->right)
                {
                    q.push(temp->right);
                }
            }
            // res = max(res, ans);
            res.push_back(ans);
        }
        if (res.size() < k)
        {
            return -1;
        }
        int m = res.size();
        sort(res.begin(), res.end());
        return res[m - k];
    }
};
