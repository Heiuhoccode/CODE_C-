#include<bits/stdc++.h>
using namespace std;
class sinhvien{
    public:
    string id, name, clas, email;
    string nganh="";
};

void nhap(sinhvien ds[], int n){
    for(int i=0; i<n; i++){
        getline(cin, ds[i].id);
        getline(cin, ds[i].name);
        getline(cin, ds[i].clas);
        getline(cin, ds[i].email);
        for(int j=3; j<7; j++){
            ds[i].nganh = ds[i].nganh + ds[i].id[j];
        }
    }
}
void xuat(string nganhhoc, sinhvien ds[], int n){
    for(int i=0; i<n; i++){
        if(ds[i].nganh == nganhhoc){
            if(nganhhoc == "DCCN" || nganhhoc == "DCAT"){
                if(ds[i].clas[0] != 'E'){
                    cout << ds[i].id<<" "<<ds[i].name<<" "<<ds[i].clas<<" "<<ds[i].email<<endl;
                }    
            }
            else{
                cout << ds[i].id<<" "<<ds[i].name<<" "<<ds[i].clas<<" "<<ds[i].email<<endl;
            }
        }
    }
}
void change(string &a){
    if(a =="KE TOAN"){
        a="DCKT";
    }
    else if(a == "CONG NGHE THONG TIN"){
        a = "DCCN";
    }
    else if(a == "AN TOAN THONG TIN"){
        a = "DCAT";
    }
    else if(a == "VIEN THONG"){
        a = "DCVT";
    }
    else if(a == "DIEN TU"){
        a = "DCDT";
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
        string nganh;
        getline(cin, nganh);
        for(int i=0; i<nganh.size(); i++){
            nganh[i] = toupper(nganh[i]);
        }
        cout << "DANH SACH SINH VIEN NGANH "<<nganh<<":"<< endl;
        change(nganh);
        xuat(nganh,ds,n);
    }
}