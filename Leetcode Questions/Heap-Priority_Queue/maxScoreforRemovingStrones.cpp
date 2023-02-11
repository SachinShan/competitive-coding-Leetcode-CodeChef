class Solution
{
public:
    int maximumScore(int a, int b, int c)
    {
        int ans = 0;
        // priority_queue<int, vector<int>, greater<int> > pq;
        priority_queue<int> pq;

        pq.push(a);
        pq.push(b);
        pq.push(c);

        while (pq.size() > 1)
        {
            int x = pq.top();
            pq.pop();
            int y = pq.top();
            pq.pop();

            ans++;
            x--;
            y--;
            if (x)
                pq.push(x);
            if (y)
                pq.push(y);
        }

        return ans;
    }
};