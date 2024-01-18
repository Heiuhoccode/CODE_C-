#include<bits/stdc++.h>

using namespace std;

struct SinhVien{
	char masv[100];
	char name[100];
	char clas[100];
	float d1,d2,d3;
};

void nhap(SinhVien &ds){
	cin >> ds.masv;
	cin.ignore();
	cin.getline(ds.name,100);
	cin >> ds.clas;
	cin >> ds.d1 >> ds.d2 >> ds.d3; 
}

void sap_xep(SinhVien ds[], int n){
	bool ascending;
	do{
		ascending = false;
		for(int i=1;i<n;i++){
			if(strcmp(ds[i-1].masv,ds[i].masv)>0){
				struct SinhVien temp = ds[i-1];
				ds[i-1] = ds[i];
				ds[i] = temp;
				ascending = true;
			}
		}
	}while(ascending);
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
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}
