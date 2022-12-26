// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// using namespace std;
// int solve(int);
// int dp[1000];

// int main(){
//     int n, res;
//     cin>>n;
//     for(int i=0; i<n; i++){
//         dp[i] = -1;
//     }
//     res = solve(n);
//     cout<<res;
// }
// int solve(int n){
//     if (n == 1) 
//        return 0; 
//     if (dp[n] != -1) 
//        return dp[n];

//     if (n%2 == 0) 
//         dp[n] = min(dp[n], solve(n/2)); 
//     if (n%3 == 0) 
//         dp[n] = min(dp[n], solve(n/3)); 
//     dp[n] = solve(n-1);

//     return dp[n];

// }





// int main() {
//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
//     int n, res;
//     cin>>n;
//     res = solve(n, 0);
//     cout<<res;
//     return 0;
// }

// int solve(int n, int count){
//     // count++;
//     if(n == 1){
//         return count;
//     }
//     if(n%3 == 0){
//         // n = n/3;
//         solve(n/3, count+1);
//     }
//     if(n%2 == 0){
//         // n = n/2;
//         solve(n/2, count+1);
//     }
//     if(n%2!=0 && n%3!=0){
//         // n = n-1;
//         solve(n-1, count+1);
//     }
//     return count;
// }





// int main() {
//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
//     int n, res;
//     cin>>n;
//     res = 0;
//     while(n!=1){
//         if(n%3==0){
//             n = n/3;
//             res++;
//         }
//         else if(n%2==0){
//             n = n/2;
//             res++;
//         }
//         else{
//             n = n-1;
//             res++;
//         } 
//     }
//     cout<<res;

// }




// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// using namespace std;
// int dp[1000];
// int findmin(int n){
//     if(n<=1){
//         return 0;
//     }
    
    
//     if(n>1){
//         if(n%3==0){
//           dp[n]=findmin(n/3)+1;
//           return dp[n];
//         }
//         // else if((n-1)%3==0){
//         //   dp[n]=findmin((n-1)/3)+2;
//         //   return dp[n];
//         // }
//         else if(n%2==0){
//             dp[n]=findmin(n/2)+1;
//             return dp[n];
//         }else{
//             dp[n]=findmin(n-1)+1;
//             return dp[n];
//         }
//     }
//         return dp[n];
    
    
// }

// int main() {
//     int n,min=0;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         dp[i]=-1;
//     }
//     int res=findmin(n);
//     cout<<res;
//     return 0;
// }





#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int solve(int);
int dp[1000];

int main(){
    int n, res;
    cin>>n;
    for(int i=0; i<n+1; i++){
        dp[i] = -1;
    }
    res = solve(n);
    cout<<res;
}
int solve(int n){
    if (n == 1) 
       return 0; 
    if (dp[n] != -1) 
       return dp[n];

    if (n%2 == 0) 
        // dp[n] = min(solve(n-1), solve(n/2)); 
        dp[n] = solve(n/2) + 1;
    if (n%3 == 0) 
        // dp[n] = min(solve(n-1), solve(n/3)); 
        dp[n] = solve(n/3) + 1;
    else
        dp[n] = 1 + solve(n-1);

    return dp[n];

}