class Solution
{
public:
    int compress(vector<char> &chars)
    {
        string st = "";
        int n = chars.size();

        int i = 0;
        while (i < n)
        {
            int count = 1;
            while (i < n - 1 && chars[i] == chars[i + 1])
            {
                count++;
                i++;
            }

            st += chars[i];
            if (count > 1)
                st += to_string(count);

            i++;
        }

        for (int i = 0; i < st.length(); i++)
        {
            chars[i] = st[i];
        }
        return st.length();
    }
};