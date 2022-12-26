class Solution
{
public:
    vector<string> buildArray(vector<int> &target, int n)
    {
        vector<string> st;
        // stack<int> stac;

        int i, j = 0;
        for (i = 1; i <= n; i++)
        {
            st.push_back("Push");
            // stac.push(i);
            // if(stac.top() == target[j]){
            if (i == target[j])
            {
                j++;
            }
            else
            {
                st.push_back("Pop");
            }
            if (j == target.size())
            {
                break;
            }
        }
        return st;
    }
};