#include<bits/stdc++.h>
using namespace std;
int CH_cuoi(int a[], int n, int k){
    for(int i=0; i<k ;i++){
        if(a[i]!=(n-k+i)){
            return 0;
        }
    }
    return 1;
}
int main(){
    int t; cin >> t;
    while(t--){
        int n,k; cin >> n >> k;
        int a[k];
        for(int i=0; i<k; i++){
            a[i]=i;
            cout << a[i]+1;
        }
        cout << " ";
        while(CH_cuoi(a,n,k)!=1){
            int vitri;
            for(int i=k-1; i>=0; i--){
                if(a[i]<(n-k+i)){
                    vitri = i;
                    break;
                }
            }
            a[vitri] = a[vitri]+1;
            for(int i=k-1; i>=vitri+1; i--){
                a[i] = a[vitri]+(i-vitri);
            }
            for(int i=0; i<k; i++){
                cout << a[i]+1;
            }
            cout << " ";
        }
        cout << endl;
    }
}