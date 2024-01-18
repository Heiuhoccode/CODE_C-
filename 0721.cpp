#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        int f[n]={0};
        int cnt =0;
        for(int i=0; i<n; i++){
            f[i]=1;
            for(int j=0;j<i;j++){
                if(a[j]<a[i]){
                    f[i] = max(f[i],f[j]+1);
                }
            }
            cnt = max(cnt,f[i]);
        }
        cout << cnt << endl;
    }
}