#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> arr(n);
        long long bda = 1e9+1;
        long long chhota = -1e9-1;

        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(arr[i]>=0 && arr[i]<bda){
                bda = arr[i];
            }
            if(arr[i]<0 && arr[i]>chhota){
                chhota = arr[i];
            }
        }
        long long res = min(bda, abs(chhota));
        cout<<res-1<<endl;
    }
}