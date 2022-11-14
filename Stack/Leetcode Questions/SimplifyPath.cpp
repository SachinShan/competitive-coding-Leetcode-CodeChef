class Solution
{
public:
    string simplifyPath(string path)
    {

        stack<string> ss;
        string res;
        for (int i = 0; i < path.size(); ++i)
        {
            if (path[i] == '/')
                continue;
            string temp;
            while (i < path.size() && path[i] != '/')
            {
                temp += path[i];
                ++i;
            }
            if (temp == ".")
            {
                continue;
            }
            else if (temp == "..")
            {
                if (!ss.empty())
                    ss.pop();
            }
            else
                ss.push(temp);
        }
        while (!ss.empty())
        {
            res = "/" + ss.top() + res;
            ss.pop();
        }
        if (res.size() == 0)
        {
            return "/";
        }
        return res;
    }
};
