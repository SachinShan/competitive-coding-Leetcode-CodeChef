class Solution
{
public:
    bool alphabet(string st)
    {
        for (auto i : st)
        {
            if (i >= 97 && i <= 122)
            {
                return true;
            }
        }
        return false;
    }

    int maximumValue(vector<string> &strs)
    {
        int ans = 0;
        for (int i = 0; i < strs.size(); i++)
        {

            if (alphabet(strs[i]))
            {
                if (strs[i].size() > ans)
                {
                    ans = strs[i].size();
                }
            }
            else
            {
                ans = max(ans, stoi(strs[i]));
            }
        }
        return ans;
    }
};