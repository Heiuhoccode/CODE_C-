#include<bits/stdc++.h>
using namespace std;
void check(int a[100][100], int i, int j, int n, int m){
    int hang[8]={-1,-1,-1,0,0,1,1,1};
    int cot[8]={-1,0,1,-1,1,-1,0,1};
    for(int u=0; u<8; u++){
        int i1 = i+hang[u];
        int j1 = j+cot[u];
        if(i1<n&&i1>=0&&j1<m&&j1>=0&&a[i1][j1]==1){
            a[i1][j1]=0;
            check(a,i1,j1,n,m);
        }
    }
}
void result(int a[100][100], int n, int m){
    int cnt=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i][j]==1){
                cnt++;
                check(a,i,j,n,m);
            }
        }
    }
    cout << cnt;
}
void nhap(int a[100][100], int n, int m){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
        }
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        int n,m; cin >> n >> m;
        int a[100][100];
        nhap(a,n,m);
        result(a,n,m);
        cout << endl;
    }
    return 0;
} 