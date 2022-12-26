class Solution
{
public:
    vector<unordered_set<int>> kjdkfkj;
    vector<int> ult, ting;

    vector<int> sumOfDistancesInTree(int N, vector<vector<int>> &edges)
    {
        kjdkfkj.resize(N);
        ult.assign(N, 0);
        ting.assign(N, 1);
        for (auto e : edges)
        {
            kjdkfkj[e[0]].insert(e[1]);
            kjdkfkj[e[1]].insert(e[0]);
        }
        dfs(0, -1);
        dfs2(0, -1);
        return ult;
    }

    void dfs(int root, int pre)
    {
        for (auto i : kjdkfkj[root])
        {
            if (i == pre)
                continue;
            dfs(i, root);
            ting[root] += ting[i];
            ult[root] += ult[i] + ting[i];
        }
    }

    void dfs2(int root, int pre)
    {
        for (auto i : kjdkfkj[root])
        {
            if (i == pre)
                continue;
            ult[i] = ult[root] - ting[i] + ting.size() - ting[i];
            dfs2(i, root);
        }
    }
};