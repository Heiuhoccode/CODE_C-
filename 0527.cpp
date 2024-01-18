#include<bits/stdc++.h>

using namespace std;

struct timee{
	int gio, phut, giay;
};

void nhap(timee ds[], int n){
	for(int i=0; i<n; i++){
		cin >> ds[i].gio >> ds[i].phut >> ds[i].giay;
	}
}

void sapxep(timee ds[], int n){
	int sumgiay[n];
	for(int i=0; i<n; i++){
		sumgiay[i] = ds[i].gio*3600 + ds[i].phut*60 + ds[i].giay;
	}
	bool ascending;
	do{
		ascending = false;
		for(int i=1; i<n; i++){
			if(sumgiay[i-1] > sumgiay[i]){
				swap(sumgiay[i-1],sumgiay[i]);
				swap(ds[i-1],ds[i]);
				ascending = true;
			}
		}
	}while(ascending);
}

void in(timee ds[], int n){
	for(int i=0; i<n; i++){
		cout << ds[i].gio << " " << ds[i].phut << " " << ds[i].giay << endl;
	}
}

int main(){
	int n;
	cin >> n;
	struct timee ds[n];
	nhap(ds, n);
	sapxep(ds, n);
	in(ds, n);
}
