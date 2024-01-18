#include<bits/stdc++.h>

using namespace std;

struct SinhVien{
	string masv;
	string name;
	string clas;
	float d1,d2,d3;
};

void nhap(SinhVien &ds){
	cin.ignore();
	getline(cin,ds.masv);
	getline(cin,ds.name);
	getline(cin,ds.clas);
	cin >> ds.d1 >> ds.d2 >> ds.d3; 
}

void sap_xep(SinhVien ds[], int n){
	for(int i=0; i<n-1; i++ ){
		for(int j=i+1; j<n; j++){
			if(ds[i].name> ds[j].name){
				swap(ds[i],ds[j]);
			}
		}
	}
}

void in_ds(SinhVien ds[], int n){
	for(int i=0; i<n; i++){
		cout << i+1 << " ";
		cout << ds[i].masv << " ";
		cout << ds[i].name << " ";
		cout << ds[i].clas << " ";
		cout << fixed << setprecision(1) << ds[i].d1 << " ";
		cout << fixed << setprecision(1) << ds[i].d2 << " ";
		cout << fixed << setprecision(1) << ds[i].d3 << endl;
	}
}

int main(){
    int n;
    cin >> n;
    struct SinhVien ds[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}

