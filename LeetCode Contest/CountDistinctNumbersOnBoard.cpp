class Solution
{
public:
    int distinctIntegers(int n)
    {
        // int count = 0;
        int temp = n;
        set<int> count;

        while (temp >= 2)
        {
            for (int i = 1; i < temp; i++)
            {
                if (temp % i == 1)
                {
                    // count++;
                    count.insert(i);
                    // cout<<count.size()<<" ";
                }
            }
            temp = temp - 1;
        }
        return count.size() + 1;
    }
};