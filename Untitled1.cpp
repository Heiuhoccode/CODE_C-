#include<bits/stdc++.h>

using namespace std;

struct SinhVien{

	string name;

	float gpa;
};

void scan(SinhVien ds[], int n){
	for(int i=0; i<n; i++){
		
		getline(cin, ds[i].name);
		cin >> ds[i].gpa;
		cin.ignore();
	}
}

void sapxep(SinhVien ds[], int n){
	// so sanh doi cho truc tiep
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(ds[i].name > ds[j].name){
				swap(ds[i],ds[j]);
			}
		}
	}
	// sap xep noi bot
//	bool giam;
//	do{
//		giam = false;
//		for(int i=1; i<n; i++){
//			if(ds[i-1].gpa<ds[i].gpa){
//				swap(ds[i-1], ds[i]);
//				giam = true;
//			}
//		}
//	}while(giam);
}

void print(SinhVien ds[], int n){
	for(int i=0;i<n; i++){
		cout << ds[i].name <<" "<<ds[i].gpa<< endl;
	}
}
int main(){
	int n;
	cin >> n;
	cin.ignore();
	struct SinhVien ds[n];
	scan(ds,n);
	sapxep(ds,n);
	print(ds,n);
	
}
