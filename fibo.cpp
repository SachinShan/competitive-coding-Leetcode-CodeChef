#include<iostream>
using namespace std;
int dp[100000];
// int fibo(int n){
//     if(n==0||n==1){
// return n;
//     }
//     return fibo(n-1)+fibo(n-2);
//}
int fibo(int n){
    if(n==0||n==1){
         dp[n]=n;
 return dp[n];

    }
    if(dp[n]!=-1){
        return dp[n];
    }

    
    dp[n] =fibo(n-1)+fibo(n-2);
    
    return dp[n];
}
int main(){
    int n;
    cin>>n;
    int dp[n+1];
    for(int i=0;i<n+1;i++){
        dp[i]=-1;
    }
    // dp[0]=0;
    // dp[1]=1;
    // for(int i=0;i<n+1;i++){
    //     dp[i]=dp[i-1]+dp[i-2];
    // }

    for(int i=0;i<n;i++){
        cout<<i<<"="<<fibo(i)<<endl;
    }
}