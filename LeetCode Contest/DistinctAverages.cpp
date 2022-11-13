class Solution
{
public:
    int distinctAverages(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());

        int i = 0, j = nums.size() - 1;
        vector<int> map;
        while (j > i)
        {
            map.push_back((nums[i] + nums[j]));
            i++;
            j--;
        }

        sort(map.begin(), map.end());

        int count = 1;
        for (int i = 1; i < map.size(); i++)
        {
            if (map[i] != map[i - 1])
            {
                count++;
            }
            else
            {
                continue;
            }
        }
        return count;
    }
};