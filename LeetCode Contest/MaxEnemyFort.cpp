class Solution
{
public:
    int captureForts(vector<int> &forts)
    {
        int djhfuwe = 0;
        int jfeihh = 0;

        for (int i = 0; i < forts.size(); i++)
        {
            if (forts[jfeihh] == 1 && forts[i] == -1)
            {
                djhfuwe = max(djhfuwe, i - jfeihh - 1);

                jfeihh = i;
            }
            else if (forts[jfeihh] == -1 && forts[i] == 1)
            {
                djhfuwe = max(djhfuwe, i - jfeihh - 1);
                jfeihh = i;
            }
            else if (forts[jfeihh] == 1 && forts[i] == 1)
            {
                jfeihh = i;
            }
            else if (forts[jfeihh] == -1 && forts[i] == -1)
            {
                jfeihh = i;
            }
            else if (forts[jfeihh] == 0 && (forts[i] == 1 || forts[i] == -1))
            {
                jfeihh = i;
            }
        }

        return djhfuwe;
    }
};