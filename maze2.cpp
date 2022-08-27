#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void solve(int, int, int, string);
int mat[1000][1000],visit[1000][1000];

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, x=0, y=0;
    string path;
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
            visit[i][j]=0;
        }
    }
   
    solve(x, y, n, path);
    
    return 0;
}
void solve(int x, int y, int n, string path){
    if(x == n-1 && y == n-1){
        cout<<path<<" ";
        return;
    }

    if(x<0 || x>=n || y<0 || y>=n || visit[x][y] ==1||mat[x][y]==0){
        return;
    }
    
    visit[x][y] = 1;
    solve(x+1, y, n, path+"D" );
    solve(x, y+1, n, path+"R");
    solve(x-1, y, n, path+"T" );
    solve(x, y-1, n, path+"L");
  visit[x][y] = 0;
}
