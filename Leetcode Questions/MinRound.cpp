class Solution
{
public:
    int minimumRounds(vector<int> &tasks)
    {
        int n = tasks.size();
        map<int, int> mapp;

        for (int i = 0; i < n; i++)
        {
            mapp[tasks[i]]++;
        }

        int count = 0;
        for (auto i : mapp)
        {
            if (i.second == 1)
            {
                return -1;
            }
            else
            {
                while (i.second > 0)
                {
                    if (i.second == 4 || i.second == 2)
                    {
                        i.second -= 2;
                    }
                    else
                    {
                        i.second -= 3;
                    }
                    count++;
                }
            }
        }
        return count;
    }
};
