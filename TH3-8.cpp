#include<bits/stdc++.h>
using namespace std;
struct tkb{
    string thu, tiet, tuan;
};
int check(tkb a[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(a[i].thu==a[j].thu){
                for(int i1=0; i1<a[j].tiet.size(); i1++){
                    if(a[i].tiet[i1]==a[j].tiet[i1]){
                        for(int i2=0; i2<a[j].tuan.size(); i2++){
                            if(a[j].tuan[i2]==a[i].tuan[i2]){
                                return 1;
                            }
                        }
                    }
                }
            }
        }
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n; scanf("\n");
        tkb a[n];
        for(int i=0; i<n; i++){
            getline(cin, a[i].thu);
            getline(cin, a[i].tiet);
            getline(cin, a[i].tuan);
        }
        if(check(a,n)==1) cout << "YES" << endl;
        else cout <<"NO"<<endl;
    }
}