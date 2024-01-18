#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;cin.ignore();
    while(t--){
        string a;
        cin >> a;
        if(a[a.size()-1] == '6' && a[a.size()-2]=='8'){
            cout << "YES\n";
        }
        else cout <<"NO\n";
    }
}