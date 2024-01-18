#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    ifstream op("DATA.in");
    op >> n >> m;
    int a[n], b[m];
    int h=0, k=0;
    int tmp;
    int dem=0;
    while(op >> tmp){
        if(dem<n){
            a[h]=tmp;
            dem++; h++;
        }
        else{
            b[k]=tmp;
            dem++; k++;
        }
    }
    sort(a,a+n);
    sort(b,b+m);
    map<int, int> soluong;
    for(int i=0; i<n; i++){
        soluong[a[i]]++;
    }
    for(int i=0; i<m; i++){
        if(soluong[b[i]]>0){
            cout << b[i] <<" ";
            soluong[b[i]]=0;
        }
    }
    return 0;
}