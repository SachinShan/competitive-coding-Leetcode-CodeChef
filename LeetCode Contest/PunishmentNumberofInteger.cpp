#include <bits/stdc++.h>

class Solution
{
public:
    bool chk(int i, const std::string &s, int n, int sum)
    {
        if (i == s.size())
        {
            return (sum == n);
        }

        for (int ind = i; ind < s.length(); ind++)
        {
            if (chk(ind + 1, s, n, sum + std::stoi(s.substr(i, ind - i + 1))))
            {
                return true;
            }
        }

        return false;
    }

    bool punish(int n)
    {
        if (chk(0, std::to_string(n * n), n, 0))
        {
            return true;
        }
        return false;
    }

    int punishmentNumber(int n)
    {
        int res = 0;

        for (int i = 1; i <= n; i++)
        {
            if (punish(i))
            {
                std::cout << i << " ";
                res += (i * i);
            }
        }

        return res;
    }
};