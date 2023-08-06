class Solution
{
public:
    string finalString(string s)
    {
        string result = ""; // Initialize an empty string to store the final result

        for (char c : s)
        {
            if (c == 'i')
            {
                // Reverse the current result string
                reverse(result.begin(), result.end());
            }
            else
            {
                // Append the current character to the result string
                result += c;
            }
        }

        return result;
    }
};