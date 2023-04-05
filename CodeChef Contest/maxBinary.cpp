// #include <iostream>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int siz, kk;
// 	    cin>>siz>>kk;
// 	    string st;
// 	    cin>>st;
// 	    if(st[0] == '0'){
// 	        st[0] = '1';
// 	        kk--;
// 	    }
// 	    while(kk--){
// 	        st += '0';
// 	    }
// 	    cout<<st<<endl;
// 	}
// 	return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int n;
    cin >> n;
    while (n--)
    {

        int a, operation;
        string str;
        string s = "";

        cin >> a >> operation >> str;

        if (str[0] == '0')
        {
            str[0] = '1';
            operation = operation - 1;
        }
        while (operation--)
        {
            s += '0';
        }
        cout << str + s << endl;
    }
    return 0;
}