class Solution
{
public:
    int alternateDigitSum(int n)
    {
        vector<int> arr;

        int temp = n;
        while (temp % 10 == 0)
        {
            temp = temp / 10;
        }
        while (temp != 0)
        {
            arr.push_back(temp % 10);
            temp = temp / 10;
        }
        for (int i = 0; i < arr.size(); i++)
        {
            cout << arr[i] << " ";
        }
        // sort(arr.begin(), arr.end());
        reverse(arr.begin(), arr.end());

        int ans = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            if (i % 2 == 0)
            {
                ans += arr[i];
            }
            else
            {
                ans -= arr[i];
            }
        }
        return ans;
    }
};