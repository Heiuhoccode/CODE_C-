#include<bits/stdc++.h>
using namespace std;
int result(int a[], int n){
    int sum =0;
    for(int i=0; i<n; i++){
        sum+=a[i];
    }
    int sumL=0;
    for(int i=0; i<n; i++){
        sum-=a[i];
        if(sumL==sum){
            return i+1;
        }
        sumL+=a[i];
    }
    return -1;
    // if(k<n){
    //     int sumL=0,sumR=0;
    //     for(int i=0; i<k; i++){
    //         sumL += a[i];
    //     }
    //     for(int i=k+1; i<n; i++){
    //         sumR += a[i];
    //     }
    //     if(sumL!=sumR){
    //         result(a,k+1,n);
    //     }
    //     else{
    //         cout << k+1;
    //     }    
    // }
    // else{
    //     cout << -1;
    // }
}
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        
        cout << result(a,n) << endl;
    }
    return 0;
}