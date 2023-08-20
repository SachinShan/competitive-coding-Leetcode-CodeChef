class Solution
{
public:
    bool isAcronym(vector<string> &words, string s)
    {
        string temp = "";

        for (auto i : words)
        {
            temp += i[0];
        }

        if (temp == s)
        {
            return true;
        }
        return false;
    }
};