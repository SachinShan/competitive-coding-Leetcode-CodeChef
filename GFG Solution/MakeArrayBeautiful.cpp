public:
vector<int> makeBeautiful(vector<int> arr)
{
    // code here
    int n = arr.size();
    stack<int> st;

    for (int i = 0; i < n; i++)
    {

        if (st.empty())
        {
            st.push(arr[i]);
        }
        else
        {
            int x = st.top();
            if ((x < 0 && arr[i] >= 0) || (x >= 0 && arr[i] < 0))
            {
                st.pop();
            }
            else
            {
                st.push(arr[i]);
            }
        }
    }
    vector<int> ans;
    while (!st.empty())
    {
        ans.push_back(st.top());
        st.pop();
    }
    reverse(ans.begin(), ans.end());
    return ans;
}