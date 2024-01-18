#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void doi_hang(double a[20][20], int t, int t1, int m){
    for(int i=0; i<m; i++){
        swap(a[t][i],a[t1][i]);
    }
}
int dem_0(double a[20][20], int t, int m){
    int dem=0;
    for(int i=0; i<m; i++){
        if(a[t][i]==0){
            dem++;
        }
    }
    return dem;
}
int dem_hang0(double a[20][20], int t, int m){
    for(int i=0; i<m; i++){
        if(a[t][i]!=0){
            return t;
        }
    }
    return dem_hang0(a,t-1,m);
}
void change(double a[20][20], int n ,int m){
    int i1=0;
    while(i1<n-1){
        for(int i=i1; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                if(dem_0(a,i,m) > dem_0(a,j,m)){
                    doi_hang(a,i,j,m);
                }
            }
        }
        int j1=0;
        while(a[i1][j1]==0){
            j1++;
        }
        for(int i=i1+1; i<n; i++){
            double h=a[i][j1]/a[i1][j1];
            for(int j=0; j<m; j++){
                a[i][j] -= a[i1][j]*h;
            }
        }
        i1++;    
    }
    cout << dem_hang0(a,n-1,m)+1 << endl; 
}
void in(double a[20][20], int n, int m){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << a[i][j]<<" ";
        }
        cout << endl;
    }
}
int main() {
    int t; cin >> t;
    while(t--){
        double a[20][20];
        int n, m;
        cin >> n;
        cin >> m;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> a[i][j];
            }
        }
        change(a,n,m);
        //in(a,n,m);   
    }
    
}
