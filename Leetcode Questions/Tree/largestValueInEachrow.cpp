class Solution
{
public:
    vector<int> largestValues(TreeNode *root)
    {
        if (root == NULL)
        {
            return {};
        }
        vector<int> ans;
        queue<TreeNode *> q;
        q.push(root);

        while (!q.empty())
        {
            int n = q.size();
            int x = INT_MIN;
            for (int i = 1; i <= n; i++)
            {
                TreeNode *temp = q.front();
                q.pop();
                x = max(x, temp->val);

                if (temp->left)
                {
                    q.push(temp->left);
                }
                if (temp->right)
                {
                    q.push(temp->right);
                }
            }
            ans.push_back(x);
        }
        return ans;
    }
};