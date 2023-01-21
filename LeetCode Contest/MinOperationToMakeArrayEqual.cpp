class Solution
{
public:
    long long minOperations(vector<int> &nums1, vector<int> &nums2, int k)
    {
        if (nums1 == nums2)
        {
            return 0;
        }
        else if (nums1 != nums2 && k == 0)
            return -1;

        long long antr = 0;
        long long jod = 0;
        for (int i = 0; i < nums1.size(); i++)
        {
            if (abs(nums1[i] - nums2[i]) % k != 0)
                return -1;
            antr = antr + (nums1[i] - nums2[i]);
            jod = jod + abs(nums1[i] - nums2[i]) / k;
        }
        if (antr != 0)
        {
            return -1;
        }
        return jod / 2;
    }
};

// class Solution {
// public:
//     long long minOperations(vector<int>& nums1, vector<int>& nums2, int k) {
//         // long long add1 = accumulate(nums1.begin(), nums1.end(), 0);
//         // long long add2 = accumulate(nums2.begin(), nums2.end(), 0);

//         int add1 = 0, add2 = 0;
//         for(int i=0; i<nums1.size(); i++){
//             add1 += nums1[i];
//             add2 += nums2[i];
//         }

//         if(add1 != add2){
//             return -1;
//         }
//         if(k == 0){
//             if(nums1 == nums2)
//                 return 0;
//             else
//                 return -1;
//         }
//         long long inc = 0, dec = 0;
//         for(int i=0; i<nums1.size(); i++){
//             long long antr = nums1[i] - nums2[i];
//             antr = antr/k;

//             if(antr < 0){
//                 inc += abs(antr);
//             }
//             else{
//                 dec += abs(antr);
//             }
//         }
//         if(inc == dec){
//             return inc;
//         }
//         else{
//             return -1;
//         }

//     }
// };

// long long  ans = 0;
//         for(int i=0; i<nums1.size(); i++){

//                 ans += abs(nums1[i] - nums2[i])/k;

//         }
//         return ans/2;