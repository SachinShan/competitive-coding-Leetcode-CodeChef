class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        int pos = haystack.find(needle);
        return pos;
    }
};

// int n = needle.length();
// int m = haystack.length();
// cout<<"N"<<n<<endl<<"M"<<m<<endl;
// for(int i=0; i<m-n+1; i++){
//     string st = haystack.substr(i, i+n);
//     cout<<i<<" "<<i+n<<endl;
//     cout<<st<<endl;
//     if(st == needle){
//         return i;
//     }
// }
// return -1;