class Solution
{
public:
    int calPoints(vector<string> &operations)
    {
        stack<int> ss;

        for (int i = 0; i < operations.size(); i++)
        {

            if (operations[i] == "+")
            {
                int x = ss.top();
                ss.pop();
                int y = ss.top();
                ss.push(x);
                ss.push(x + y);
            }
            else if (operations[i] == "C")
            {
                ss.pop();
            }
            else if (operations[i] == "D")
            {
                ss.push(2 * ss.top());
            }
            else
            {
                ss.push(stoi(operations[i]));
            }
        }
        int sum = 0;
        while (!ss.empty())
        {
            sum = sum + ss.top();
            ss.pop();
        }
        return sum;
    }
};