#include<bits/stdc++.h>
using namespace std;
int ketthuc(int a[], int n){
    for(int i=0; i<n; i++){
        if(a[i]!=0) return 0;
    }
    return 1;
}
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        int dem=0;
        while(ketthuc(a,n)==0){
            bool chan = true;
            for(int i=0; i<n; i++){
                if((a[i]%2)!=0){
                    a[i]-=1;
                    dem++;
                    chan = false;
                }
            }
            if(chan){
                for(int i=0; i<n; i++){
                    a[i]/=2;
                }
                dem++;
            }
        }
        cout << dem << endl;
    }
}