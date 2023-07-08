class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        unordered_map<char, int> count;
        int ans = 0;
        int l = 0;

        for (int r = 0; r < s.size(); r++)
        {
            count[s[r]]++;

            while (count[s[r]] >= 2)
            {
                count[s[l]]--;
                l++;
            }
            ans = max(ans, r - l + 1);
        }
        return ans;
    }
};