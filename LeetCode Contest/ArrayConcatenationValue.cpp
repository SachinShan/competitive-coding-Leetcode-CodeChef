class Solution
{
public:
    long long findTheArrayConcVal(vector<int> &nums)
    {
        long long canan = 0;
        int kjh = 0;
        int asd = nums.size() - 1;
        while (kjh < asd)
        {
            string num1 = to_string(nums[kjh]);
            string num2 = to_string(nums[asd]);
            string num = num1 + num2;
            int hold = stoi(num);
            canan += hold;
            kjh++;
            asd--;
        }
        if (nums.size() % 2 != 0)
        {
            // int numb=stoi(nums[st]);
            canan += nums[kjh];
        }
        return canan;
    }
};