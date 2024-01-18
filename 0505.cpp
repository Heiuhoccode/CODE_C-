#include<bits/stdc++.h>

using namespace std;

struct NhanVien{
	char manv[1000]="00001";
	char name[1000];
	char sex[100];
	char dob[1000];
	char address[1000];
	char mst[11];
	char doc[1000];
};

void nhap(NhanVien &a){
	cin.getline(a.name,1000);
	cin >> a.sex;
	cin >> a.dob;
	cin.ignore();
	cin.getline(a.address,1000);
	cin >> a.mst;
	cin >> a.doc;
}

void in(NhanVien a){
	cout << a.manv << " " << a.name <<" "<<a.sex<< " " << a.dob << " " << a.address<< " "<< a.mst<< " "<<a.doc;
}

int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}
