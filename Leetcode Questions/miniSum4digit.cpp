class Solution
{
public:
    int minimumSum(int num)
    {

        vector<int> n(4, 0);

        for (int i = 0; i < 4; i++, num = num / 10)
        {
            n[i] = num % 10;
        }
        sort(n.begin(), n.end());

        return 10 * (n[0] + n[1]) + (n[2] + n[3]);
    }
};