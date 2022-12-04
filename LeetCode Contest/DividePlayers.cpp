class Solution
{
public:
    long long dividePlayers(vector<int> &skill)
    {

        sort(skill.begin(), skill.end());

        int l = 0, r = skill.size() - 1, count = 1;
        long long int team = skill[l] + skill[r];
        long long int sum = skill[l] * skill[r];
        l++;
        r--;

        while (l < r)
        {
            if (skill[l] + skill[r] == team)
            {
                sum += skill[l] * skill[r];
                l++;
                r--;
            }
            else
            {
                return -1;
            }
        }
        return sum;
    }
};