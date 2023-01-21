// #include <unordered_map>
class Solution
{
public:
    int getCommon(vector<int> &nums1, vector<int> &nums2)
    {
        unordered_map<int, bool> mapp;

        for (int i = 0; i < nums1.size(); i++)
        {

            mapp[nums1[i]] = true;
        }

        for (int i = 0; i < nums2.size(); i++)
        {
            if (mapp[nums2[i]] == true)
            {
                return nums2[i];
            }
        }
        return -1;
    }
};
