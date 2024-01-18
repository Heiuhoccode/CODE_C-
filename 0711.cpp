#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n;
        cin>> n;
        int a[n]={0};
        int vitri;
        int cnt=0;
        for(int i=0;i<n;i++){
            cout << a[i];
        }
        cout << " ";
        while(cnt<pow(2,n)-1){
            for(int i=n-1;i>=0;i--){
                if(a[i]==0){
                    vitri=i;
                    a[i]=1;
                    break;
                }
            }
            for(int i=vitri+1;i<=n-1;i++){
                a[i]=0;
            }		
            for(int i=0;i<n;i++){
                cout<<a[i];
            }
            cout<<" ";
            cnt++;
        }cout << endl;
    }
    
}

