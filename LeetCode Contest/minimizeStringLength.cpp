class Solution
{
public:
    int minimizedStringLength(string s)
    {
        unordered_map<char, int> mapp;

        for (auto i : s)
        {
            mapp[i]++;
        }

        return mapp.size();
    }
};