#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, flag = 0;
        cin >> n;
        n = n * 2;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        for (int i = 0; i < n - 2; i++)
        {
            if (arr[i] == arr[i + 1] && arr[i] == arr[i + 2])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }
    }
    return 0;
}

//  unordered_map<int, int> mapp;
// 	    int n;
// 	    cin>>n;
// 	    n = n*2;
// 	    int arr[n];
// 	    for(int i=0; i<n; i++){
// 	        cin>>arr[i];
// 	    }
// 	    int flag = 0;
// 	    for(int i=0; i<n; i++){
// 	        mapp[i]+= 1;
// 	        if(mapp[i] == 3){
// 	            flag = 1;
// 	            break;
// 	        }
// 	    }
// 	    if(flag == 1){
// 	        cout<<"No"<<endl;
// 	    }
// 	    else{
// 	        cout<<"Yes"<<endl;
// 	    }