class Solution
{
public:
    int findJudge(int n, vector<vector<int>> &trust)
    {

        vector<int> in(n + 1, 0);
        vector<int> out(n + 1, 0);

        for (int i = 0; i < trust.size(); i++)
        {
            in[trust[i][0]]++;
            out[trust[i][1]]++;
        }

        for (int i = 1; i < in.size(); i++)
        {
            if (in[i] == 0 && out[i] == n - 1)
            {
                return i;
            }
        }
        return -1;
    }
};

// 57/94 Test case passing
class Solution
{
public:
    int findJudge(int n, vector<vector<int>> &trust)
    {
        if (trust.size() == 0)
        {
            return 1;
        }
        int judge = trust[0][1];
        if (trust.size() == 1)
        {
            return judge;
        }
        int prev = trust[0][0];
        for (int i = 1; i < trust.size(); i++)
        {
            if (prev != trust[i][0] && judge != trust[i][1])
                return -1;
            prev = trust[i][0];
        }
        return judge;
    }
};