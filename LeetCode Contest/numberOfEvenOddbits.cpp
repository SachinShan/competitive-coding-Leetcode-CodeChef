class Solution
{
public:
    string DecimalToBinary(int num)
    {
        string str;
        while (num)
        {
            if (num & 1) // 1
                str += '1';
            else // 0
                str += '0';
            num >>= 1; // Right Shift by 1
        }
        return str;
    }

    vector<int> evenOddBit(int n)
    {
        string temp = DecimalToBinary(n);
        // reverse(temp.begin(), temp.end());
        int even = 0, odd = 0;
        for (int i = 0; i < temp.size(); i++)
        {
            if (i % 2 == 0)
            {
                if (temp[i] == '1')
                {
                    even++;
                }
            }
            else
            {
                if (temp[i] == '1')
                {
                    odd++;
                }
            }
        }
        vector<int> ans(2);
        ans[0] = even;
        ans[1] = odd;
        return ans;
    }
};