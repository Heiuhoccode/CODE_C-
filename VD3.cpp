// Bai toan cho thue may

#include<bits/stdc++.h>
using namespace std;
int main(){
	int m;
	cout << "So luong khach hang: "; cin >> m;
	int kh[m][2];
	int max = 0;
	for(int i=0; i<m; i++){
		cout << "Khach hang " << i+1 << " bat dau va ket thuc thue ngay ";
		cin >> kh[i][0];
		cin >> kh[i][1];
	}
	bool ascending;
	do{
		ascending = false;
		for(int i=1; i<m; i++){
			if(kh[i-1][0] > kh[i][0]){
				swap(kh[i-1][0],kh[i][0]);
				swap(kh[i-1][1],kh[i][1]);
				ascending = true;
			}
		}
	}while(ascending);
	
	for(int i=0; i<m; i++){
		if(max < kh[i][1]){
			max = kh[i][1];
		}
	}
	
	int a[m*2];
	int h = 0;
	for(int i=0; i<m; i+=1){
		a[h] = kh[i][0];
		h++;
		a[h] = kh[i][1];
		h++;
	}
	for(int i=0; i<m*2; i++){
		cout << a[i] << " ";
	}
}
