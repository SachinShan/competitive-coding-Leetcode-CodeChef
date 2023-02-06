class Solution
{
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode *root)
    {
        {
            if (!root)
            {
                return {};
            }
            vector<int> row;
            vector<vector<int>> result;
            queue<TreeNode *> q;
            q.push(root);
            int count = 1;
            bool chk = 0;
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
                // bool chk = 0;
                if (--count == 0)
                {
                    if (chk)
                    {
                        reverse(row.begin(), row.end());
                        // result.push_back(row);
                        cout << "check" << endl;
                    }
                    result.emplace_back(row), row.clear();
                    chk = !chk;

                    count = q.size();
                    cout << "hee"
                         << " " << chk;
                }
            }
            return result;
        }
    }
};
