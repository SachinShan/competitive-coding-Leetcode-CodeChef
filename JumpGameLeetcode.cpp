#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    bool canJump(vector<int> &nums)
    {
        // vector<int> dp;

        int n = nums.size();
        int temp = 0, i = 0;

        while (temp != n - 1 || temp < n - 1)
        {
            if (nums[i] == 0)
            {
                break;
            }
            temp = temp + nums[i];
            i = i + nums[i];
        }

        if (temp = n - 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};