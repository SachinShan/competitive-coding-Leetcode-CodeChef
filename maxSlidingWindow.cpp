#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int arr[100];
int solve(int, int);

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, x;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cin>>x;
    if(n<x){
        cout<<"Invalid";
    }
    else
    cout<<solve(n, x);
    return 0;
}


int solve(int n, int x){
    int sum, res;
    res = -1;
    sum = 0;
    for(int i=0; i<x; i++){
        sum = sum + arr[i];
    }
    for(int i=0; i<=(n-x); i++){
        
        sum = sum - arr[i] + arr[i+x];

        // for(int j=i; j<(i+x); j++){
        //     sum = sum + arr[j];
        // }
        if(res<sum){
            res = sum;
        }

    }
    return res;
}
