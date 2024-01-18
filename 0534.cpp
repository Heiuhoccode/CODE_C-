#include<bits/stdc++.h>
using namespace std;
int checktn(string a){
    for(int i=0; i<a.size()/2; i++){
        if(a[i]!=a[a.size()-1-i]){
            return 0;
        }
    }
    return 1;
}
bool cmp(string a, string b){
    if(a.size() == b.size()) return a>b;
    return a.size() > b.size();
}
void sapxep(string a[], int n){
    sort(a,a+n,cmp);
}
void in(string a[],map<string,int> soluong, int n){
    for(int i=0; i<n; i++){
        if(soluong[a[i]]!=0){
            cout << a[i] <<" "<< soluong[a[i]]<< endl;
            soluong[a[i]]=0;
        }
    }
}
int main(){
    string so;
    string numtn[1001];
    int h=0;
    map<string,int> soluong;
    while(cin >> so){
        if(checktn(so)==1 && so.size() >1){
            numtn[h]=so;
            h++;
            soluong[so]++;
        }
    }
    sapxep(numtn,h);
    in(numtn,soluong,h);
}