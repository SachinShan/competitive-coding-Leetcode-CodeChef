class Solution
{
public:
    bool isPalindrome(string s)
    {

        string temp;
        for (int i = 0; i < s.size(); i++)
        {
            if (isalpha(s[i]) || isdigit(s[i]))
            {
                temp.push_back(tolower(s[i]));
            }
        }
        stack<char> st;
        for (int i = 0; i < temp.size(); i++)
        {
            st.push(temp[i]);
        }
        string temp2;
        while (!st.empty())
        {
            temp2.push_back(st.top());
            st.pop();
        }
        if (temp2 == temp)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};