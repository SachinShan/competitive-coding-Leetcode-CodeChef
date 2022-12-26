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
    int deepestLeavesSum(TreeNode *root)
    {
        queue<TreeNode *> q;
        q.push(root);
        int count = 0;

        while (!q.empty())
        {
            int n = q.size();
            for (int i = 0; i < n; i++)
            {
                TreeNode *newnode = q.front();
                if (newnode->left)
                {
                    q.push(newnode->left);
                }
                if (newnode->right)
                {
                    q.push(newnode->right);
                }
                q.pop();
            }
            count++;
        }
        // cout<<count<<endl;
        int ans = 0;
        queue<TreeNode *> q2;
        q2.push(root);
        while (ans < count - 1)
        {
            int n = q2.size();
            for (int i = 0; i < n; i++)
            {
                TreeNode *newnode = q2.front();

                if (newnode->left)
                    q2.push(newnode->left);
                if (newnode->right)
                    q2.push(newnode->right);

                q2.pop();
            }
            ans++;
        }
        // cout<<ans<<endl;

        int sum = 0;
        while (!q2.empty())
        {
            TreeNode *newnode = q2.front();
            sum += newnode->val;
            q2.pop();
        }

        return sum;
    }
};
