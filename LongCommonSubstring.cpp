
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
// int dp[1000][1000];
int sequence(string t1, string t2, int n, int m){
   int dp[n+1][m+1];
    int result = 0;
    for(int i=0; i<n+1; i++){
        for(int j=0; j<m+1; j++){
            dp[i][j] = -1;
        }
    }
    
    for(int i=0; i<n+1; i++){
        for(int j=0; j<m+1; j++){
            if(i==0 || j==0){
                dp[i][j] = 0;
                // continue;
            }
             else if(t1[i-1]==t2[j-1]){
                dp[i][j]= 1+dp[i-1][j-1];
                 result = max(result, dp[i][j]);
            }
                
            else{
                 // dp[i][j]= max( dp[i-1][j], dp[i][j-1]);
                dp[i][j] = 0;
            }
        }
        }      
    return result;

}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string t1, t2;
    int n, m;
    cin>>t1>>t2;
    n = t1.size();
    m = t2.size();
    
    cout<<sequence(t1, t2, n, m);
    // cout<<s;
    return 0;
}


