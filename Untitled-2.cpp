#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t; cin.ignore();
    while(t--){
        string a;
        cin >> a;
        if(a.size() >= 11){
            cout << a[0]<< a.size()-2 << a[a.size()-1] << endl;
        }
        else{
            cout << a << endl;
        }
    }
}