class Solution
{
public:
    void reverseString(vector<char> &s)
    {

        stack<char> stac;

        for (int i = 0; i < s.size(); i++)
        {
            stac.push(s[i]);
        }

        // string ans = "";
        int j = 0;
        while (!stac.empty())
        {
            s[j] = stac.top();
            stac.pop();
            j++;
        }
    }
};