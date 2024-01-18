#include<bits/stdc++.h>

using namespace std;

// Ham kiem tra xau nhi phan co k bit 1 lien tiep
int result(int a[], int n, int k){
	int cnt = 0;
	int dem = 0;
	for(int i=0; i<n; i++){if(a[i]==1){cnt++;
			if(cnt==k && (i==n-1 || a[i+1]==0)){dem++;}
			else if(cnt>k && (i==n-1 || a[i+1]==0)){dem--;}}
		else{cnt = 0;}}
	if(dem == 1){return 1;}
	return 0;}
int main(){
	int n,k;// Khai bao xau nhi phan co n bit va k bit 1 lien tiep
	// Nhap du lieu tu ban phim
	do{
		cout << "Nhap so bit cua xau nhi phan: ";
		cin >> n;
		cout << "So bit 1 lien ke duy nhat cua xau nhi phan la: ";
		cin >> k;
		if(k>n){cout << endl << "Khong hop le. Vui long nhap lai." << endl;	}
		cout << endl;
	}while(k>n);
	int a[n] = {0};	// Thiet lap xau nhi phan
	int vitri;	// Khai bao vi tri bit 0 dau tien tu phai sang trai cua xau nhi phan
	int cnt=0;	// Khai bao bien dem
	int dem = 0; // Khai bao so luong xau nhi phan thoa man
	// Dem so luong xau nhi phan thoa man
	while(cnt<pow(2,n)-1){
		for(int i=n-1; i>=0; i--){if(a[i]==0){vitri=i;a[i]=1;break;}}
		for(int i=vitri+1; i<=n-1; i++){a[i]=0;}		
		if(result(a,n,k)==1){dem++;}
		cnt++;}		
	cout << "Tong tat ca cac truong hop thoa man dieu kien la: " << dem << endl; 
	cout << "Xau nhi phan thoa man dieu kien la: " << endl;
	for(int i=0; i<n ;i++){ a[i] = 0; }
	int cnt1 = 0;
	int vitri1;
	// In ra cac xau nhi phan
	while(cnt1 < pow(2,n)-1){
		// Tim kiem vi tri bit 0 dau tien tu phai sang trai cua xau nhi phan
		for(int i=n-1;i>=0;i--){if(a[i]==0){vitri1=i; a[i]=1; break; } }
		// Thay doi cac bit 1 co vi tri phia ben phai bit 0 dau tien thanh bit 0
		for(int i=vitri1+1;i<=n-1;i++){ a[i]=0; }	
		// In ra xau co k bit 1 lien tiep
		if(result(a,n,k)==1){for(int i=0; i<n; i++){cout << a[i];}
			cout << endl;}
		cnt1++;
	}		
}
