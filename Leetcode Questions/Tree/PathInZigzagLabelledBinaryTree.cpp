class Solution
{
public:
    int power(int n)
    {
        int i = 1;
        while (i <= n)
        {
            i = i * 2;
        }
        return i / 2;
    }

    vector<int> pathInZigZagTree(int label)
    {
        vector<int> ans;

        while (label != 1)
        {
            ans.insert(ans.begin(), label);
            int nearest = power(label);
            label = nearest - ((label - nearest) / 2 + 1);
        }
        ans.insert(ans.begin(), 1);
        return ans;
    }
};