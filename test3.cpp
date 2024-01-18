#include<bits/stdc++.h>

using namespace std;

class Congdan{
	private:
	string name;
	string dob;
	string id;
	double gpa;
	public:
	void nhap(){
		getline(cin,name);
		cin >> dob;
		cin >> id;
	}	
	void in(){
		cout << name << " " << dob << " " << id << " " << gpa <<  endl;
	}
	void nhapgpa()	{
		do{
			cin >> gpa;
			if(gpa>4 || gpa <0){
				cout << "khong hop le" << endl;
			}
		}while(gpa>4 || gpa<0);
	}
};



int main(){
	Congdan cong_dan;
	cong_dan.nhap();
	cong_dan.nhapgpa();
	cong_dan.in();
}
