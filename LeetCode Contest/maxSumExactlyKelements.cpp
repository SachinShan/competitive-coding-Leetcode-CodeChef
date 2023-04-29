class Solution
{
public:
    int maximizeSum(vector<int> &nums, int k)
    {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int temp = nums[n - 1];
        int sum = 0;
        while (k--)
        {
            // cout<<temp<<endl;
            sum += temp;
            temp++;
        }

        return sum;
    }
};