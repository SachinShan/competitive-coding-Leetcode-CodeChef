// Cutting Rod Problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int length[100];
int price[100];
int rod(int, int);

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int rl, n;
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>length[i];
    }
    for(int i=0; i<n; i++){
        cin>>price[i];
    }
        cin>>rl;
    

    
    cout<<rod(rl, n);
    return 0;
}

int rod(int rl, int n){
    if(rl == 0 || n==0){
        return 0;
    }
    if(length[n-1]>rl){
        return rod(rl, n-1);
    }
    else{
        return max((price[n-1] + rod(rl-length[n-1], n)), rod(rl, n-1));
    }
}


//Using Dynamic Promming

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int length[1000];
int price[1000];
int dp[1000][1000];
int rod(int, int);

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int rl, n;
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>length[i];
    }
    for(int i=0; i<n; i++){
        cin>>price[i];
    }
        cin>>rl;
    
    for(int i=0; i<n+1; i++){
        for(int j=0; j<rl+1; j++){
            dp[i][j] = -1;
        }
    }
    int res = rod(rl, n);
    cout<<res;
    return 0;
}

int rod(int rl, int n){
    if(rl == 0 || n==0){
        return 0;
    }
    if(dp[n][rl] != -1){
        return dp[n][rl];
    }
    if(length[n-1]>rl){
        dp[n][rl] =  rod(rl, n-1);
        return dp[n][rl];
    }
    else{
        dp[n][rl] = max((price[n-1] + rod(rl-length[n-1], n)), rod(rl, n-1));
        return dp[n][rl];
    }
    
}
