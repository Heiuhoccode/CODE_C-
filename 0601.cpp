#include<bits/stdc++.h>

using namespace std;

class SinhVien{
	private:
	string id, name, clas;
	string dob;
	float gpa;
	public:
	void nhap(){
		id = "B20DCCN001";
		getline(cin,name);
		getline(cin,clas);
		cin >> dob;
		do{
			cin >> gpa;
		}while(gpa>4 || gpa < 0);
	}
	void xuat(){
		cout << id << " " << name << " " << clas << " " ;
		
		if(dob[1]=='/'){
			dob = "0" + dob;
		}
		if(dob[4]=='/'){
			dob.insert(3,"0");
		}
		cout << dob << " ";
		cout << fixed << setprecision(2) << gpa;
	}	
};

int main(){
	SinhVien a;
	a.nhap();
	a.xuat();
	return 0;
}
