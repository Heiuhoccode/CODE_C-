#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t; cin.ignore();
    string name[t], email[t];
    map<string, int> dem;
    for(int i=0; i<t ;i++){
        getline(cin,name[i]);
        for(int j=0; j<name[i].size(); j++){
            name[i][j] = tolower(name[i][j]);
        }
        stringstream ss(name[i]);
        string w;
        vector<string> b;
        while(ss >> w){
            b.push_back(w);
        }
        email[i] = email[i] + b[b.size()-1];
        for(int j=0; j<b.size()-1; j++){
            email[i] = email[i] + b[j][0];
        }
        dem[email[i]]++;
        if(dem[email[i]]>1){
            stringstream c;
            c << dem[email[i]];
            string d = c.str();
            email[i] = email[i] + d;
        }
    }
    for(int i=0; i<t; i++){
        cout << email[i] <<"@ptit.edu.vn"<< endl;
    }
}