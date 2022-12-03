class Solution
{
public:
    int threeSumClosest(vector<int> &nums, int target)
    {

        int n = nums.size();
        sort(nums.begin(), nums.end());
        long long int result = INT_MAX;

        for (int i = 0; i <= n - 3; i++)
        {
            int l = i + 1, r = n - 1;
            long long int sum = 0;
            while (l < r)
            {
                sum = nums[i] + nums[l] + nums[r];
                if (sum > target)
                {
                    r--;
                }
                else if (sum < target)
                {
                    l++;
                }
                else
                {
                    return sum;
                }

                if (abs(result - target) < abs(sum - target))
                {
                    result = result;
                }
                else
                {
                    result = sum;
                }
            }
        }
        return result;
    }
};

// Km Yogya hai ye wala solution .... 21 testcase hi chla pa rhe h
//  ham inse better ymmed kiye the /.......

// long long int res = INT_MAX;
//         if(nums.size() <= 3){
//             long long int sum = 0;
//             for(int i=0; i<nums.size(); i++){
//             sum += nums[i];
//             }
//             return sum;
//         }

//         for(int i=0; i<=nums.size()-3; i++){
//             long long int x = 0;
//             x = nums[i] + nums[i+1] + nums[i+2];

//             if(abs(target-res) < abs(target-x)){
//                 res = res;
//             }
//             else if(abs(target-res) > abs(target-x)){
//                 res = x;
//             }
//             // res = min(res, x);

//         }
//         return res;