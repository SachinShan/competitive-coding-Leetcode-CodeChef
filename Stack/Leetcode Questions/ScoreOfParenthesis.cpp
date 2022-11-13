class Solution
{
public:
    int scoreOfParentheses(string s)
    {

        stack<int> ss;
        int ans = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(')
            {
                ss.push(ans);
                ans = 0;
            }
            else
            {
                ans = ss.top() + max(2 * ans, 1);
                ss.pop();
            }
        }
        return ans;
    }
};

// int count = 0;
//         ssack<char> ss;
//         for (int i = 0; i < s.size(); i++)
//     {
//         if(ss.size() == 0){
//         ss.push(s[i]);
//             continue;
//     }
//         if (s[i] == '(' )
//         {
//             ss.push(s[i]);
//         }
//         if (s[i] == ')')
//         {
//             if (ss.top() == '('){
//                 count++;
//                 ss.pop();
//             }
//             else
//                 ss.push(s[i]);
//         }
//     }
//         return count;