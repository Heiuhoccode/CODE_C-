#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;	// Khai bao do dai xau nhi phan
	cout<<"Nhap so bit cua xau nhi phan: ";
	cin>> n;	// Nhap du lieu tu ban phim
	int a[n]={0};	// Thiet lap xau nhi phan
	int vitri;	// Khai bao vi tri bit 0 dau tien tu phai sang trai cua xau nhi phan
	int cnt=0;	// Khai bao bien dem
	cout<<"So xau nhi phan co do dai "<<n<<" bit la: "<<pow(2,n)<<endl;	
	cout<<"Xau nhi phan co do dai "<<n<<" bit la: "<<endl;
	for(int i=0;i<n;i++){cout << a[i];}
	cout << endl;
	// In ra cac xau nhi phan
	while(cnt<pow(2,n)-1){
		// Tim kiem vi tri bit 0 dau tien tu phai sang trai cua xau nhi phan
		for(int i=n-1;i>=0;i--){if(a[i]==0){vitri=i;a[i]=1;break;}}
		// Thay doi cac bit 1 co vi tri phia ben phai bit 0 dau tien thanh bit 0
		for(int i=vitri+1;i<=n-1;i++){a[i]=0;}		
		// In ra xau co do dai n
		for(int i=0;i<n;i++){cout<<a[i];}
		cout<<endl;
		cnt++;
	}
}
