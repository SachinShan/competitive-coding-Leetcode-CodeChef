// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin>>t;
//     while(t--){
//         int n; 
//         cin>>n;
//         vector<int> arr;

//         for(int i=0; i<n; i++){
//             int x;
//             cin>>x;
//             arr.push_back(x);
//         }


//     }
// }

#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long int
using namespace std;
void precal()
{
}
void solve()
{
    int sz;
    cin>>sz;
    vector<long>st(sz);
    map<long,vector<int>>meraMap;
    for(int i=0;i<sz;i++){
        cin>>st[i];
        meraMap[st[i]].push_back(i);
    }

    int flag=false;
    for(int i=0;i<sz;i++){
        if(st[i]==i+1){
            flag=true;
            break;
        }else{
            if(meraMap.find(i+1)!=meraMap.end()){

            auto it=meraMap.find(i+1);
            vector<int>k=it->second;
            bool check=false;
                for(int l=0;l<k.size();l++){
                    if(k[l]>i){
                        check=true;
                        break;
                    }
                }
                if(check){
                    flag=true;
                    break;
                }

            }
            
        }
    }
    if(flag){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << fixed;
    cout << setprecision(10);
    precal();
    int t = 1;
    cin>>t;
    for (int i = 1; i <= t; i++)
    {
        solve();
    }
}