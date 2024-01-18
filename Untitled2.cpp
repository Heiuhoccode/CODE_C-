#include<bits/stdc++.h>

using namespace std;

struct nhanvien{
	int id;
	string name,gt,dob,adres,tax,doc;
};
void scan(nhanvien ds[], int n){
	for(int i=0 ;i<n; i++){
		ds[i].id = i+1;
		getline(cin, ds[i].name);
		getline(cin, ds[i].gt);
		getline(cin, ds[i].dob);
		getline(cin, ds[i].adres);
		getline(cin, ds[i].tax);
		getline(cin, ds[i].doc);
	}
}
void print(nhanvien ds[], int n){
	for(int i=0; i<n; i++){
		if(ds[i].id < 10){
			cout << "0000" << ds[i].id << " ";
		}
		else{
			cout << "000" << ds[i].id << " ";
		}
		cout << ds[i].name << " ";
		cout << ds[i].gt << " ";
		cout << ds[i].dob << " ";
		cout << ds[i].adres << " ";
		cout << ds[i].tax << " ";
		cout << ds[i].doc << endl;
	}
}
int main(){
	int n; cin >> n;
	cin.ignore();
	struct nhanvien ds[n];
	scan(ds,n);
	print(ds,n);
	return 0;
}
