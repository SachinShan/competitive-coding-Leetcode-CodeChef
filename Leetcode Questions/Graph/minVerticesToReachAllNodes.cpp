class Solution
{
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>> &edges)
    {
        vector<int> ans;
        vector<int> incoming(n, 0);

        for (auto i : edges)
        {
            int incom = i[1];
            incoming[incom]++;
        }

        for (int i = 0; i < n; i++)
        {
            if (incoming[i] == 0)
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};