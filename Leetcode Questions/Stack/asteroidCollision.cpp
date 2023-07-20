class Solution
{
public:
    bool opposite(int x, int y)
    {
        // if(x > 0 && y < 0){
        //     return true;
        // }
        if (x < 0 && y > 0)
        {
            return true;
        }

        return false;
    }

    vector<int> asteroidCollision(vector<int> &arr)
    {
        stack<int> st;

        for (int i = 0; i < arr.size(); i++)
        {
            int x = arr[i];
            int flag = true;
            while (!st.empty() && opposite(x, arr[st.top()]))
            {

                if (abs(x) == abs(arr[st.top()]))
                {
                    st.pop();
                    flag = false;
                    break;
                }
                if (abs(x) < abs(arr[st.top()]))
                {
                    flag = false;
                    break;
                }
                st.pop();
            }
            if (flag)
            {
                st.push(i);
                cout << st.top() << " ";
            }
        }
        unordered_map<int, bool> mapp;
        vector<int> ans;
        while (!st.empty())
        {
            mapp[st.top()] = true;
            st.pop();
        }
        for (int i = 0; i < arr.size(); i++)
        {
            if (mapp[i])
            {
                ans.push_back(arr[i]);
            }
        }
        // sort(ans.begin(), ans.end());
        return ans;
    }
};