class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {

        for (int i = digits.size() - 1; i >= 0; i--)
        {

            if (digits[i] == 9)
            {
                digits[i] = 0;
            }
            else
            {
                digits[i]++;
                return digits;
            }
        }

        digits.push_back(0);
        digits[0] = 1;
        return digits;
    }
};

// long long int temp = 0;
//         vector<int> number;
//         vector<int> temporary;

//         for (int i = 0; i < digits.size(); i++)
//         {
//             temp = temp * 10 + digits[i];
//         }

//         temp = temp + 1;

//         while(temp!=0){
//             number.push_back(temp%10);
//             temp = temp/10;
//         }

//         for(int i=number.size()-1; i>=0; i--){
//             temporary.push_back(number[i]);
//         }

//         return temporary;
