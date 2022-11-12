#include <iostream>
#include <stack>
#include <unordered_map>
using namespace std;

int main()
{
    // your code goes here
    int t, n;
    string s;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cin >> s;

        unordered_map<char, int> mapp;
        for (int i = 0; i < n; i++)
        {
            mapp[s[i]]++;
        }
        int flag = 1;
        for (int i = 0; i < mapp.size(); i++)
        {
            if (mapp[i] % 2 != 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}

// int t, n;
// 	string s;
// 	cin>>t;
// 	while(t--){
// 	    cin>>n;
// 	    cin>>s;
// 	    stack<char> ss;
// 	    for(int i=0; i<n; i++){
// 	        ss.push(s[i]);
// 	    }
// 	    string a, b;

// 	    while(!ss.empty()){

// 	        a.push_back(ss.top());
// 	        ss.pop();
// 	        if(!ss.empty()){
// 	            b.push_back(ss.top());
// 	            ss.pop();
// 	        }
// 	        else{
// 	            break;
// 	        }
// 	    }
// 	    int flag1 = 1, flag2 = 1;
// 	    for(int i=1; i<a.size(); i++){
// 	        if(a[i] != a[i-1]){
// 	            flag1 = 0;
// 	            break;
// 	        }
// 	    }
// 	    for(int i=1; i<b.size(); i++){
// 	        if(b[i] != b[i-1]){
// 	            flag2 = 0;
// 	            break;
// 	        }
// 	    }

// 	    if(flag1 && flag2){
// 	        cout<<"YES"<<endl;
// 	    }
// 	    else{
// 	        cout<<"NO"<<endl;
// 	    }
// 	}