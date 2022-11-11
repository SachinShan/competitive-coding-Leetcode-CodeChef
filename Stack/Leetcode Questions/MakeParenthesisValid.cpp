// None  of the codes are working

class Solution
{
public:
    int minAddToMakeValid(string s)
    {
        stack<char> ss;

        for (int i = 0; i < s.size(); i++)
        {

            if (s[i] == '(')
            {
                ss.push(s[i]);
            }
            else if (!ss.empty())
            {
                if (s[i] == ')' && ss.top() == '(')
                {
                    ss.pop();
                }
                if (s[i] == ')' && ss.top() != '(')
                {
                    ss.push(s[i]);
                }
            }
            else if (s[i] == ')')
            {
                ss.push(s[i]);
            }
        }
        int count = 0;
        while (!ss.empty())
        {
            count++;
            cout << ss.top() << " ";
            ss.pop();
        }
        return count;

        //===========================================================================================
        // int now = 0, res = 0;
        // for (int i = 0; i < s.size(); i++) {
        //     if (s[i] == '(') now++;
        //     if (s[i] == ')') now--;
        //     if (now < 0) res++, now = 0;
        // }
        // return res + now;

        //========================================================================================

        // int x = 0, y = 0;
        // for(int i=0; i<s.size(); i++){
        //     if(s[i] == '(' || s[i] == '{' || s[i] == '['){
        //         x++;
        //     }
        //     else{
        //         y++;
        //     }
        // }
        // if(x>=y){
        //     return x-y;
        // }
        // else{
        //     return y-x;
        // }

        // ========================================================================================

        // stack<char> stac;
        // int count = 0;
        // for(int i=0; i<s.size(); i++){
        //     if(s[i] == '(' || s[i] == '{' || s[i] == '['){
        //         stac.push(s[i]);
        //     }
        //     if((s[i] == ')' && stac.top() == '(' ||
        //      s[i] == '}' && stac.top() == '{' ||
        //       s[i] == ']' && stac.top() == '[') && !stac.empty() ){
        //         stac.pop();
        //     }
        //     else{
        //         count++;
        //     }
        // }
        // return count;
    }
};