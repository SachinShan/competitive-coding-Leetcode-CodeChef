class Solution
{
public:
    bool validateStackSequences(vector<int> &pushed, vector<int> &popped)
    {
        if (pushed == popped)
        {
            return true;
        }
        int n = pushed.size();
        stack<int> st;
        int j = 0;
        for (int i = 0; i < n; i++)
        {
            st.push(pushed[i]);

            if (st.top() == popped[j])
            {
                while (j < n && st.top() == popped[j])
                {
                    st.pop();
                    j++;
                    if (st.empty())
                    {
                        break;
                    }
                }
            }
        }
        if (st.empty())
        {
            return true;
        }
        if (st.top() == popped[j])
        {
            while (j < n)
            {
                if (st.top() == popped[j])
                {
                    st.pop();
                    j++;
                }
                else
                {
                    break;
                }
            }
        }
        if (st.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};