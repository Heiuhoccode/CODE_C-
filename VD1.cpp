// Bai toan cai tui

#include<bits/stdc++.h>
using namespace std;

void nhap(int trong_luong[], int gia_tri[], int n){
	for(int i=0; i<n; i++){
		cout << "Do vat thu " << i+1 << " co trong luong va gia tri la ";
		cin >> trong_luong[i] >> gia_tri[i];
	}
}

int check(int D[], int n){
	for(int i=0; i<n; i++){
		if(D[i]==0){
			return 0;
		}
	}
	return 1;
}

void in(int trong_luong[], int gia_tri[], int n, int limit){
	int kg;
	int max_value=0;
	int D[n]={0};
	int vitri;
	while(check(D,n)==0){
		int sum_kg = 0;
		int sum_value = 0;
		for(int i=n-1;i>=0;i--){
			if(D[i]==0){
				vitri=i;
				D[i]=1;
				break;
			}
		}
		for(int i=vitri+1;i<=n-1;i++){
			D[i]=0;
		}
		for(int i=0; i<n; i++){
			if(D[i]==1){
				sum_kg += trong_luong[i];
				sum_value += gia_tri[i];
			}
		}
		if(sum_value > max_value && sum_kg < limit ){
			kg = sum_kg;
			max_value = sum_value;
		}
	}
	cout << "Gia tri toi da la: " << max_value << endl;
	cout << "Trong luong tuong ung la: "<< kg << endl;
}

int main(){
	int limit,n;
	cout << "So luong do vat la: ";
	cin >> n;
	cout << "Trong luong gioi han: "; cin >> limit;
	int trong_luong[n];
	int gia_tri[n];
	nhap(trong_luong, gia_tri, n);
	in(trong_luong, gia_tri, n, limit);
}
