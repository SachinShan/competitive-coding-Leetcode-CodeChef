class Solution
{
public:
    bool isFascinating(int n)
    {
        int one = n * 2;
        int two = n * 3;

        string temp = to_string(n);

        temp += to_string(one);
        temp += to_string(two);
        // cout<<temp<<endl;

        unordered_map<char, int> mapp;

        for (auto i : temp)
        {
            if (i == '0')
            {
                return false;
            }

            mapp[i]++;
            if (mapp[i] == 2)
            {
                return false;
            }
        }
        if (mapp.size() == 9)
        {
            return true;
        }
        return false;
    }
};