class Solution
{
public:
    int longestCommonSubsequence(string t1, string t2)
    {
        int n = t1.length();
        int m = t2.length();

        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
        for (int j = 0; j <= m; j++)
            dp[0][j] = 0;
        for (int i = 0; i <= n; i++)
            dp[i][0] = 0;

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (t1[i - 1] == t2[j - 1])
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                else
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
        return dp[n][m];
    }
    int longestPalindromeSubseq(string s)
    {
        string st = s;
        reverse(st.begin(), st.end());

        return longestCommonSubsequence(s, st);
    }
};

// class Solution {
// public:
//     bool isPalindrome(string ans){
//         int n = ans.length();

//         if(n == 1 || n == 0){
//             return true;
//         }

//         string temp = "";
//         for(int i=n-1; i>=0; i--){
//             temp += ans[i];
//         }
//         if(temp == ans)
//             return true;

//         return false;
//     }

//     int res = 0;
//     void fun(int ind, string s, string ans){
//         if(ind < 0){
//             return;
//         }

//         if(isPalindrome(ans)){
//             int n = ans.length();
//             cout<<ans<<endl;
//             res = max(res, n);
//             // return res;
//         }

//         fun(ind-1, s, ans);
//         fun(ind-1, s, ans+s[ind]);

//         return;
//     }

//     int longestPalindromeSubseq(string s) {

//         int n = s.length();

//          fun(n-1, s, "");
//          return res;
//     }
// };