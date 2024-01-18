#include<bits/stdc++.h>
using namespace std;
class Concern{
    public:
    string id, name;
    int soluong;
};
void nhap(Concern ds[], int n){
    for(int i=0; i<n; i++){
        getline(cin, ds[i].id);
        getline(cin, ds[i].name);
        cin >> ds[i].soluong;
        cin.ignore();
    }
}
bool cmp(Concern a, Concern b){
    if(a.soluong == b.soluong){
        return a.id < b.id;
    }
    return a.soluong > b.soluong;
}
void sapxep(Concern ds[], int n){
    sort(ds,ds+n,cmp);
}
void in(Concern ds[], int n){
    for(int i=0; i<n; i++){
        cout << ds[i].id << " " << ds[i].name << " " << ds[i].soluong << endl;
    }
}
int main(){
    int n; cin >> n;cin.ignore();
    Concern ds[n];
    nhap(ds,n);
    sapxep(ds,n);
    in(ds,n);
}