class Solution
{
public:
    string removeDuplicates(string s)
    {
        // without STACK
        string st;

        for (int i = 0; i < s.size(); i++)
        {
            if (st.size() && st.back() == s[i])
                st.pop_back();
            else
                st.push_back(s[i]);
        }

        return st;

        // WITH STACK........(not working)
        // stack<char> stac;
        // stack<char> stac2;

        // stac.push(s[0]);
        // for(int i=1; i<s.size(); i++){
        //     if(s[i] == stac.top()){
        //         // continue;
        //         stac.pop();
        //     }
        //     else{
        //         stac.push(s[i]);
        //     }
        // }
        // while(!stac.empty()){
        //     stac2.push(stac.top());
        //     stac.pop();
        // }
        // string ans = "";

        // while(!stac2.empty()){
        //     ans.push_back(stac2.top());
        //     stac2.pop();
        // }
        // return ans;
    }
};