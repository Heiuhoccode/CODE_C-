#include<bits/stdc++.h>
using namespace std;
class sinhvien{
    public:
    string id, name, clas, email;
    string khoa="";
};

void nhap(sinhvien ds[], int n){
    for(int i=0; i<n; i++){
        getline(cin, ds[i].id);
        getline(cin, ds[i].name);
        getline(cin, ds[i].clas);
        getline(cin, ds[i].email);
        ds[i].khoa = ds[i].khoa + "20"+ds[i].clas[1]+ds[i].clas[2];
    }
}
void xuat(string khoahoc, sinhvien ds[], int n){
    for(int i=0; i<n; i++){
        if(ds[i].khoa == khoahoc){
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
        string khoahoc;
        getline(cin, khoahoc);
        cout << "DANH SACH SINH VIEN KHOA "<<khoahoc<<":"<< endl;
        xuat(khoahoc,ds,n);
    }
}