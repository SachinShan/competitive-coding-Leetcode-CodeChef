class Solution
{
public:
    int findMinArrowShots(vector<vector<int>> &points)
    {
        sort(points.begin(), points.end());
        // for(int i=0; i<points.size(); i++){
        //             cout<<points[i][0]<<" "<<points[i][1]<<endl;
        //         }

        stack<vector<int>> st;

        for (int i = 0; i < points.size(); i++)
        {
            if (st.empty())
            {
                st.push(points[i]);
            }
            else
            {
                int x1 = points[i][0];
                int y1 = points[i][1];

                int x = st.top()[0];
                int y = st.top()[1];

                if ((x1 <= y && x1 >= x) || (y1 <= y && y1 >= x))
                {
                    // continue;
                    if (x1 <= y && x1 >= x)
                        st.top()[0] = x1;

                    if (y1 <= y && y1 >= x)
                        st.top()[1] = y1;
                }
                else
                {
                    st.push(points[i]);
                }
            }
        }

        int ans = st.size();

        cout << "stack" << endl;
        while (!st.empty())
        {
            cout << st.top()[0] << " " << st.top()[1] << endl;
            st.pop();
        }

        return ans;
    }
};

//         return i;