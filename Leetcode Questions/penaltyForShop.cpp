class Solution
{
public:
    int bestClosingTime(string cust)
    {

        int n = cust.size();
        int ans = INT_MAX;
        int res = 0;
        vector<int> pre(n + 1, 0), suf(n + 1, 0);

        for (int i = 0; i < n; i++)
        {
            if (cust[i] == 'N')
            {
                pre[i + 1] = pre[i] + 1;
            }
            else
            {
                pre[i + 1] = pre[i];
            }
        }

        for (int i = n - 1; i >= 0; i--)
        {
            if (cust[i] == 'Y')
            {
                suf[i] = suf[i + 1] + 1;
            }
            else
            {
                suf[i] = suf[i + 1];
            }
        }

        for (int i = 0; i <= n; i++)
        {
            int pen = suf[i] + pre[i];
            if (pen < ans)
            {
                ans = pen;
                res = i;
            }
        }
        return res;
    }
};