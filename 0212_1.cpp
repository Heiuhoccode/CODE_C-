#include<bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin >> t;
    long long X=1e9+7;
    while(t--){
        int n, x;
        cin >> n >> x;
        int a[n];
        long long sum = 0, temp =1;
        for(int i=n-1 ;i>=0; i--){
            cin >> a[i];
        }
        for(int i=0; i<n; i++){
            sum = (sum +(a[i]*temp))%X;
            temp = (temp*x) %X;
        }
        cout << sum << endl;
    }
}