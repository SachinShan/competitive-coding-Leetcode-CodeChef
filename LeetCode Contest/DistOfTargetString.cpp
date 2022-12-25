class Solution
{
public:
    int closetTarget(vector<string> &words, string target, int startIndex)
    {

        int n = words.size();

        int count1 = 0, count2 = 0;
        int ind = startIndex;

        for (int i = 0; i <= n; i++)
        {
            if (words[ind] == target)
            {
                break;
            }
            if (count1 == n)
            {
                count1 = -1;
                break;
            }
            ind = (ind + 1) % n;
            count1++;
        }

        ind = startIndex;
        for (int i = 0; i <= n; i++)
        {
            if (words[ind] == target)
            {
                break;
            }
            if (count2 == n)
            {
                count2 = -1;
                break;
            }
            ind = (ind - 1 + n) % n;
            count2++;
        }

        return min(count1, count2);
    }
};