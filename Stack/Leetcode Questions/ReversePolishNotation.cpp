class Solution
{
public:
    int evalRPN(vector<string> &tokens)
    {
        stack<int> ss;

        for (int i = 0; i < tokens.size(); i++)
        {
            // ss.push(stoi(tokes[i]);)

            if (tokens[i] == "+")
            {
                long long int x = ss.top();
                ss.pop();
                long long int y = ss.top();
                ss.pop();

                ss.push(x + y);
            }
            else if (tokens[i] == "-")
            {
                long long int x = ss.top();
                ss.pop();
                long long int y = ss.top();
                ss.pop();
                // if(y>x){
                ss.push(y - x);
                // }
                // else{
                // ss.push(x-y);
                // }
            }
            else if (tokens[i] == "*")
            {
                long long int x = ss.top();
                ss.pop();
                long long int y = ss.top();
                ss.pop();

                ss.push(x * y);
            }
            else if (tokens[i] == "/")
            {
                long long int x = ss.top();
                ss.pop();
                long long int y = ss.top();
                ss.pop();

                ss.push(y / x);
            }
            else
            {
                ss.push(stoi(tokens[i]));
            }
        }
        // if(ss.top() < 0){
        //     return -1 * ss.top();
        // }
        return ss.top();
    }
};