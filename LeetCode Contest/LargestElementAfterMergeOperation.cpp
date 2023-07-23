class Solution
{
public:
    long long maxArrayValue(std::vector<int> &nums)
    {
        int n = nums.size();
        long long val = 0; // Initialize the maximum value to 0.
        stack<int> st;
        for (int i = 0; i < n; i++)
        {
            st.push(nums[i]);
        }

        while (!st.empty())
        {
            long long temp = st.top();
            st.pop();
            while (!st.empty() && st.top() <= temp)
            {
                temp += st.top();
                st.pop();
            }
            val = max(val, temp);
        }

        return val;
    }
};
