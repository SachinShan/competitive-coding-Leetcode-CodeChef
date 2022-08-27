
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
int wt[1000];
int value[1000];
int dp[1000][1000];
using namespace std;



int knapsack(int c, int n){

    if(n==0||c==0){
      return 0;
    }

    if(dp[n][c] != -1){
        return dp[n][c];
    }
    
    if(wt[n-1]>c){
         dp[n][c] = knapsack(c, n-1);
         return dp[n][c];
    }
    else{
        dp[n][c] = max(value[n-1]+knapsack((c-wt[n-1]), n-1), knapsack(c, n-1));
        return dp[n][c];
    }
    
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int c, n, res;
    cin>>c;
    cin>>n;
    
    for(int i=0; i<n; i++){
        cin>>wt[i];
    }
    for(int i=0; i<n; i++){
        cin>>value[i];
    }
    for(int i=0; i<n+1; i++){
        for(int j=0; j<c+1; j++){
            dp[i][j] = -1;
        }
    }
    res = knapsack(c, n);
    cout<<res;
    return 0;
}
 