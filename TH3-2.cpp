#include<bits/stdc++.h>
using namespace std;
struct NVien{
    string id, name, chucvu;
    long long luong, ngaycong, thuong, pc, tong;
};

int main(){
    NVien a;
    a.id="NV01";
    getline(cin, a.name);
    cin >> a.luong >> a.ngaycong;
    scanf("\n");
    a.luong *= a.ngaycong;
    getline(cin, a.chucvu);
    
    if(a.chucvu=="GD"){
        a.pc = 250000;
    }
    else if(a.chucvu=="PGD"){
        a.pc = 200000;
    }
    else if(a.chucvu=="TP"){
        a.pc = 180000;
    }
    else if(a.chucvu=="NV"){
        a.pc = 150000;
    }
    if(a.ngaycong >= 25) {
        a.thuong = a.luong *0.2;
    }
    else if(a.ngaycong >=22 && a.ngaycong <25){
        a.thuong = a.luong /10;
    }
    else {
        a.thuong =0;
    }
    a.tong = a.luong + a.thuong + a.pc;
    cout << a.id <<" "<< a.name<<" "<<a.luong<<" "<<a.thuong<<" "<< a.pc<<" "<<a.tong;
    return 0;
}