#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int ptta;
        cin >> ptta;
        int cnt = 0;

        if (ptta < 50)
        {
            while (ptta < 50)
            {
                // cout<<"ptta"<<ptta<<" ";
                ptta += 2;
                cnt++;
            }
            // if(ptta == 49){
            //     cnt+=3;
            // }
        }
        else if (ptta > 50)
        {
            while (ptta >= 52)
            {
                ptta -= 3;
                cnt++;
            }
            // if(ptta == 51){
            //     cnt+= 2;
            // }
            // else if(ptta == 49){
            //     cnt += 3;
            // }
        }
        if (ptta == 51)
        {
            cnt += 2;
        }
        else if (ptta == 49)
        {
            cnt += 3;
        }
        cout << cnt << endl;
    }
    return 0;
}
