class Solution
{
public:
    int passThePillow(int n, int time)
    {
        int sam = 0;
        int sid = 1;
        int curr = 1;

        while (time > sam)
        {
            if (curr == n)
            {
                sid = -1;
            }
            else if (curr == 1)
            {
                sid = 1;
            }
            curr = curr + sid;
            sam = sam + 1;
        }
        return curr;
    }
};
