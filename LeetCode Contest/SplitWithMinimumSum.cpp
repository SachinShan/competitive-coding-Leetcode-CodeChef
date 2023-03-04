class Solution
{
public:
    int splitNum(int num)
    {
        vector<int> temp;
        int hold = num;
        while (hold != 0)
        {
            int x = hold % 10;
            temp.push_back(x);
            hold = hold / 10;
        }
        string s1 = "", s2 = "";
        sort(temp.begin(), temp.end());

        for (int i = 0; i < temp.size(); i++)
        {
            if (i % 2 == 0)
            {
                s1 += to_string(temp[i]);
            }
            else
            {
                s2 += to_string(temp[i]);
            }
        }

        int ans = stoi(s1) + stoi(s2);
        return ans;
    }
};