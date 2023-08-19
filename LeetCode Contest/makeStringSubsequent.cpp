class Solution
{
public:
    bool canMakeSubsequence(string str1, string str2)
    {
        int i = 0;
        int j = 0;

        while (i < str1.size() && j < str2.size())
        {
            if (str1[i] == str2[j])
            {
                i++;
                j++;
            }
            else
            {

                str1[i] = (str1[i] - 'a' + 1) % 26 + 'a';
                if (str1[i] == str2[j])
                {
                    i++;
                    j++;
                }
                else
                {
                    i++;
                }
            }
        }
        if (j == str2.size())
        {
            return true;
        }
        return false;
    }
};
