class Solution
{
public:
    int minMaxDifference(int num)
    {
        string n = to_string(num);
        string m = to_string(num);

        char s, r;
        for (int i = 0; i < n.size(); i++)
        {
            if (n[i] != '9')
            {
                s = n[i];
                break;
            }
        }
        for (int i = 0; i < m.size(); i++)
        {
            if (m[i] != '0')
            {
                r = m[i];
                break;
            }
        }

        // char s =  n[0];
        for (int i = 0; i < n.size(); i++)
        {
            if (n[i] == s)
            {
                n[i] = '9';
            }
            if (m[i] == r)
            {
                m[i] = '0';
            }
        }
        cout << n << " " << m << endl;
        int x = stoi(n);
        int y = stoi(m);
        return abs(x - y);
        // return num;/
    }
};