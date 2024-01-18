#include<bits/stdc++.h>
using namespace std;
bool cmp(string a, string b){
    return a<b;
}
void sapxep(vector<string> &a, int h){
    sort(a.begin(), a.end(), cmp);
}
int main(){
    map<string, int> soluong;
    ifstream op1("DATA1.in");
    vector<string> a;
    int h=0;
    string w;
    while(op1 >> w){
        for(int i=0; i<w.size(); i++){
            w[i] = tolower(w[i]);
        }
        soluong[w]++;
        a.push_back(w);
        h++;
    }
    op1.close();
    vector<string> b;
    map<string, int> soluong1;
    int k=0;
    ifstream op2("DATA2.in");
    while(op2 >> w){
        for(int i=0; i<w.size(); i++){
            w[i] = tolower(w[i]);
        }
        soluong[w]++;
        if(soluong[w]==1){
            soluong1[w]++;
        }
        a.push_back(w);
        b.push_back(w);
        k++;
        h++;
    }
    sapxep(a,h);
    sapxep(b,k);
    for(int i=0; i<h; i++){
        if(soluong[a[i]]!=0){
            cout << a[i] <<" ";
            soluong[a[i]]=0;
        }
    }
    cout << endl;
    for(int i=0; i<k; i++){
        if(soluong1[b[i]]==0){
            cout << b[i]<<" ";
            soluong1[b[i]]=1;
        }
    }
    return 0;
}