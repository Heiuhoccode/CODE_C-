// Bai toan nguoi du lich

#include<bits/stdc++.h>
using namespace std;
int kiemtra_cauhinhcuoi(int a[], int n){
	for(int i=1; i<n; i++){
		if(a[i-1]<a[i]){
			return 0;
		}
	}
	return 1;
}
void hoanvi(int a[], int n){
	int temp, vitri;
	for(int i=n-1; i>=1; i--){
		if(a[i]>a[i-1]){
			vitri = i-1;
			temp = a[i-1];
			break;
		}
	}
	int min = 1e9;
	int vitri1;
	for(int i=vitri+1; i<n; i++){
		if(a[i]>temp && a[i] < min){
			min = a[i];
			vitri1 = i;
		}
	}
	swap(a[vitri],a[vitri1]);
	sort(a+ vitri+1, a+n);
}
int main(){
	int n, min = 1e9;
	cout << "So luong thanh pho: "; cin >> n;
	int city[n];
	for(int i=0; i<n; i++){
		city[i]=i;
	}
	int fee[n][n];
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin >> fee[i][j];
		}
	}
	int toiuu[n];
	while(kiemtra_cauhinhcuoi(city,n)==0){
		hoanvi(city,n);
		int cnt=fee[city[0]][city[n-1]];
		for(int i=0; i<n-1; i++){
			cnt += fee[city[i]][city[i+1]];
		}
		if(cnt < min){
			min = cnt;
		}
	}
	cout << "Chi phi nho nhat la: " << min << endl;
}



