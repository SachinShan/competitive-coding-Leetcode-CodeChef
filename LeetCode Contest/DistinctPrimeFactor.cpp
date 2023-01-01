class Solution
{
public:
    int distinctPrimeFactors(vector<int> &nums)
    {

        vector<long> temp;

        temp.push_back(2);

        int elekd = *max_element(nums.begin(), nums.end());
        for (int i = 3; i <= elekd; i++)
        {
            bool jhanda = true;
            for (int j = 2; j <= i / 2; j++)
            {
                if (i % j == 0)
                {
                    jhanda = false;
                    break;
                }
            }
            if (jhanda)
            {
                temp.push_back(i);
            }
        }
        int count = 0;
        for (int i = 0; i < temp.size(); i++)
        {
            int num = temp[i];
            bool jhanda = false;
            int el = *max_element(nums.begin(), nums.end());
            if (el == 0)
            {

                break;
            }

            for (int j = 0; j < nums.size(); j++)
            {
                if (nums[j] % num == 0)
                {
                    while (nums[j] > 0 && nums[j] % num == 0)
                    {
                        nums[j] /= num;
                    }
                    jhanda = true;
                }
            }
            if (jhanda)
            {
                count++;
            }
        }

        return count;
    }
};