
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
// int dp[1000][1000];
string s;
void sequence(string t1, string t2, int n, int m){
   int dp[n+1][m+1];
    for(int i=0; i<n+1; i++){
        for(int j=0; j<m+1; j++){
            dp[i][j] = -1;
        }
    }
    
    for(int i=0; i<n+1; i++){
        for(int j=0; j<m+1; j++){
            if(i==0 || j==0){
                dp[i][j] = 0;
                continue;
            }
             if(t1[i-1]==t2[j-1]){
                dp[i][j]= 1+dp[i-1][j-1];
            }
                
            else{
                 dp[i][j]= max( dp[i-1][j], dp[i][j-1]);
            }
        }
        }        
    int i=n,j=m;
        while(i>0 && j>0){     
            if(t1[i-1]==t2[j-1]){
                s+=t1[i-1];    
                i--;j--;
            }
            else{
                if(dp[i][j-1]>dp[i-1][j])j--;   
                else i--;
            }
        }
        reverse (s.begin(),s.end());
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string t1, t2;
    int n, m;
    cin>>t1>>t2;
    n = t1.size();
    m = t2.size();
    
    sequence(t1, t2, n, m);
    cout<<s;
    return 0;
}


