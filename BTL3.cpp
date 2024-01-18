#include<bits/stdc++.h>
#include<vector>
using namespace std;

int snt(int a){
	if(a<2) return 0;
	for(int i=2; i<=sqrt(a); i++){
		if(a%i==0) return 0;
	}
	return 1;
}

int kiemtra_cauhinhcuoi(int a[], int n){
	for(int i=1; i<n; i++){
		if(a[i-1]<a[i]){
			return 0;
		}
	}
	return 1;
}

int kiemtra_nt(int a[], int n, int k){
	int dem = 0;
	for(int i=0; i<n-k+1; i++){
		int sum = 0;
		for(int j=0; j<k; j++){
			sum += a[i+j];
		}
		if(snt(sum)==0){
			dem++;
		}
	}
	if(dem==0){
		return 1;
	}
	return 0;
}

void hoanvi(int a[], int n, int k){
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

void nhap(int a[], vector<int> cauhinh, int n, int k){
	cout << "Day so ban dau la: ";
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	if(kiemtra_nt(a,n,k)==1){
		for(int i=0; i<n; i++){
			cauhinh.push_back(a[i]);
		}
	}
}

void result(int a[],vector<int> cauhinh, int n, int k){
	int dem=0;
	while(kiemtra_cauhinhcuoi(a,n)!=1){
		hoanvi(a,n,k);
		if(kiemtra_nt(a,n,k)==1){
			for(int i=0; i<n; i++){
				cauhinh.push_back(a[i]);
			}
			dem++;
		}
	}
	if(dem==0){
		cout << "Khong co day so nao thoa man." << endl;
	}
	else{
		cout << "So day so thoa man la: "<< dem << endl;
		cout << "Cac day so nguyen to thuan nhat bac "<< k <<" la:\n";
		for(int i=0; i<cauhinh.size(); i++){
			cout << cauhinh[i] << " ";
			if((i+1)%n==0){
				cout << endl;
			}
		}	
	}
}

int main(){
	int n,k;
	do{
		cout << "So phan tu cua mang la: ";
		cin >> n;
		cout << "Bac cua day so nguyen to thuan nhat la: ";
		cin >> k;
		if(n<k){
			cout << "Khong hop le. Vui long nhap lai." << endl;
		}
	}while(n<k);
	int a[n];
	vector<int> cauhinh;
	nhap(a,cauhinh,n,k);sort(a,a+n);
	result(a,cauhinh,n,k);
}
