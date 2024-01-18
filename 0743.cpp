#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t; cin.ignore();
    while(t--){
        string a;
        getline(cin ,a);
        stringstream ss(a);
        string w;
        vector<string> b;
        while(ss >> w){
            b.push_back(w);
        }
        for(int i=b.size()-1; i>=0; i--){
            cout << b[i] <<" ";
        }
        cout << endl;
    }
}