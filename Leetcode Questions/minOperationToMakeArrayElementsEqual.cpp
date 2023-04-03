class Solution
{
public:
    vector<long long> minOperations(vector<int> &nums, vector<int> &queries)
    {
        int n = nums.size();
        int m = queries.size();
        vector<long long> res;
        sort(nums.begin(), nums.end());

        vector<long long> prefix(n);
        prefix[0] = nums[0];
        for (int i = 1; i < n; i++)
        {
            prefix[i] = prefix[i - 1] + nums[i];
        }
        prefix.insert(prefix.begin(), 0);

        for (int i = 0; i < m; i++)
        {
            int val = queries[i];
            int ind = lower_bound(nums.begin(), nums.end(), val) - nums.begin();

            int left = ind;
            int right = n - ind;

            long long left_sum = prefix[ind];
            long long right_sum = prefix[n] - prefix[ind];

            cout << left_sum << " " << right_sum << endl;

            long long left_query = 1LL * val * left;
            long long right_query = 1LL * val * right;

            long long ans = (left_query - left_sum) + (right_sum - right_query);
            res.push_back(ans);
            // res.push_back(1LL * val * (2 * ind - n) + prefix[n] - 2 * prefix[ind]);
        }
        return res;
    }
};