class Solution
{
public:
    int nextGreaterElement(int n)
    {
        string st = to_string(n);

        int i = st.length() - 1;

        while (i >= 1)
        {
            int j = i - 1;
            string temp = st;
            swap(temp[i], temp[j]);
            if (temp > st)
            {
                return stoi(temp);
            }
            i--;
        }

        return -1;
    }
};