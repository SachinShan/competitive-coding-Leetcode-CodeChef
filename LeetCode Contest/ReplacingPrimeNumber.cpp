class Solution
{
public:
    int smallestValue(int n)
    {

        int dksjf = 0;
        int sdjjf = 0;
        int f = 2;
        while (f <= n / 2)
        {
            if (n % f == 0)
            {
                dksjf += f;
                sdjjf = 1;
                n /= f;
                continue;
            }
            f++;
        }
        if (n != 1 && sdjjf == 1)
        {
            dksjf += n;
        }
        if (n == 2 && dksjf == 4)
        {
            return dksjf;
        }
        if (sdjjf == 0)
        {
            return n;
        }
        return smallestValue(dksjf);
    }
};