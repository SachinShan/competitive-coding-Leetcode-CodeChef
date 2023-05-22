class Solution
{
public:
    int minLength(string s)
    {
        stack<char> stt;

        for (char c : s)
        {
            if (!stt.empty() && (stt.top() == 'C' && c == 'D' || stt.top() == 'A' && c == 'B'))
            {
                stt.pop();
            }
            else
            {
                stt.push(c);
            }
        }

        return stt.size();
    }
};
