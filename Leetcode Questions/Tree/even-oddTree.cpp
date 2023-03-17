
class Solution
{
public:
    bool isEvenOddTree(TreeNode *root)
    {
        vector<int> row;
        vector<vector<int>> result;
        queue<TreeNode *> q;
        q.push(root);
        int count = 1;

        while (!q.empty())
        {
            if (q.front()->left)
            {
                q.push(q.front()->left);
            }
            if (q.front()->right)
            {
                q.push(q.front()->right);
            }
            row.push_back(q.front()->val), q.pop();

            if (--count == 0)
            {
                result.emplace_back(row), row.clear();
                count = q.size();
            }
        }
        for (int i = 0; i < result.size(); i++)
        {
            for (int j = 0; j < result[i].size(); j++)
            {
                if (i % 2 == 0)
                {
                    if (result[i][j] % 2 == 0)
                    {
                        return false;
                    }
                    if (j != 0)
                    {
                        if (result[i][j] <= result[i][j - 1])
                            return false;
                    }
                }
                else
                {
                    if (result[i][j] % 2 != 0)
                    {
                        return false;
                    }
                    if (j != 0)
                    {
                        if (result[i][j] >= result[i][j - 1])
                            return false;
                    }
                }
            }
        }
        return true;
    }
};
