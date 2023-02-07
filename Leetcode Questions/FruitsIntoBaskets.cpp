class Solution
{
public:
    int totalFruit(vector<int> &fruits)
    {
        int left = 0, right = 0, result = 0;
        unordered_map<int, int> count;
        while (right < fruits.size())
        {
            count[fruits[right]]++;
            while (count.size() > 2)
            {
                count[fruits[left]]--;
                if (count[fruits[left]] == 0)
                {
                    count.erase(fruits[left]);
                }
                left++;
            }
            result = max(result, right - left + 1);
            right++;
        }
        return result;
    }
};
