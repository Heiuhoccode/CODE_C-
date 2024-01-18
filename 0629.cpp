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
void in(Concern ds[], int n,int a, int b){
    for(int i=0; i<n; i++){
        if(a <= ds[i].soluong && ds[i].soluong <= b){
            cout << ds[i].id << " " << ds[i].name << " " << ds[i].soluong << endl;
        }
    }
}
int main(){
    int n; cin >> n;cin.ignore();
    Concern ds[n];
    nhap(ds,n);
    int q; cin >> q;
    while(q--){
        int a,b;
        cin >> a >> b;
        cout << "DANH SACH DOANH NGHIEP NHAN TU "<<a<<" DEN "<<b<<" SINH VIEN:" << endl;
        sapxep(ds,n);
        in(ds,n,a,b);    
    }
    
}