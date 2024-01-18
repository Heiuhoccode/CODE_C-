#include<bits/stdc++.h>

using namespace std;

class NhanVien{
	private:
	string id, name, sex, dob, address, id_tax, doc;
	public:
	void nhap(){
		id="00001";
		getline(cin,name);
		getline(cin,sex);
		getline(cin,dob);
		getline(cin,address);
		getline(cin,id_tax);
		getline(cin,doc);
	}
	void xuat(){
		cout << id << " ";
		cout << name << " ";
		cout << sex << " ";
		cout << dob << " ";
		cout << address << " ";
		cout << id_tax << " ";
		cout << doc << endl;
	}	
};
int main(){
    NhanVien a;
    //cin >> a;
    a.nhap();
    //cin >> a;
    a.xuat();
    return 0;
}
