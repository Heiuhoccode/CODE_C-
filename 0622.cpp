#include<bits/stdc++.h>
using namespace std;
class sinhvien{
    public:
    string id, name, clas, email;
};

void nhap(sinhvien ds[], int n){
    for(int i=0; i<n; i++){
        getline(cin, ds[i].id);
        getline(cin, ds[i].name);
        getline(cin, ds[i].clas);
        getline(cin, ds[i].email);
    }
}
void xuat(string lop, sinhvien ds[], int n){
    for(int i=0; i<n; i++){
        if(ds[i].clas == lop){
            cout << ds[i].id<<" "<<ds[i].name<<" "<<ds[i].clas<<" "<<ds[i].email<<endl;
        }
    }
}
int main(){
    int n; cin >> n;
    sinhvien ds[n];
    cin.ignore();
    nhap(ds,n);
    int q; cin >> q;
    cin.ignore();
    while(q--){
        string lop;
        getline(cin, lop);
        cout << "DANH SACH SINH VIEN LOP "<<lop<<":"<< endl;
        xuat(lop,ds,n);
    }
}