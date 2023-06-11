class Solution
{
public:
    string smallestString(string s)
    {
        string result;
        int i = 0;
        int n = s.size();
        // if(n == 1 && s[0] == 'a'){
        //     string a = "z";
        //     return a;
        // }
        while (s[i] == 'a')
        {
            i++;
        }
        if (i == n)
        {
            s[n - 1] = 'z';
        }

        for (; i < s.size(); i++)
        {
            if (s[i] == 'a')
            {
                break;
            }
            char temp = s[i];
            s[i] = temp - 1;
        }

        return s;
    }
};