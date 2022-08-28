#include<iostream>
using namespace std;
int arr[100][100];
void spiral(int);

int main()
{
    int x;
    cin>>x;
    for(int i=0; i<x; i++){
        for(int j=0; j<x; j++){
            cin>>arr[i][j];
        }
    }
    spiral(x);
}

void spiral(int x){
    int k, i, l, m, n;
    k =0;
    l  = x-1;
    m = x-1;
    n = 0;

    while (k<=m || n<=l){
        for(i=n; i<=l; i++){
            cout<<arr[k][i];
        }
        k++;

        for(i=k; i<=m; i++){
            cout<<arr[i][l];
        }
        l--;

        for(i=l; i>=n; i--){
            cout<<arr[m][i];
        }
        m--;

        for(i=m; i>=k; i--){
            cout<<arr[i][n];
        }
        n++;

    }

}