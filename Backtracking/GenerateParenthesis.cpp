class Solution
{
public:
    void brackets(int n, vector<string> &ans, int o, int c, string s)
    {
        if (o == n && c == n)
        {
            ans.push_back(s);
        }

        if (o < n)
        {
            brackets(n, ans, o + 1, c, s + "(");
        }

        if (c < o)
        {
            brackets(n, ans, o, c + 1, s + ")");
        }
    }

    vector<string> generateParenthesis(int n)
    {
        vector<string> ans;

        brackets(n, ans, 0, 0, "");
        return ans;
    }
};