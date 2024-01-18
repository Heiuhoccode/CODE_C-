#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	int a[n];
	for(int i=0; i<n; i++){
		cin >>a[i];
	}
	int b[2][m];
	for(int i=0; i<m ;i++){
		b[0][i] = i+1;
	}
	for(int i=0; i<n-1; i++){
		if(a[i]!=0){
			int sum = 0;
			for(int j=i+1; j<n; j++){
				if(a[i]==a[j] && a[j]!=0){
					sum++;
					a[j]=0;
				}
			}
			b[1][a[i]-1] = sum;
		}
	}
	bool sx;
	do{
		sx = false;
		for(int i=1; i<m;i++){
			if(b[1][i-1]<b[1][i]){
				swap(b[1][i-1],b[1][i]);
				swap(b[0][i-1],b[0][i]);
				sx = true;
			}
		}
	}while(sx);
	bool bangnhau = true;
	for(int i=1 ;i<m; i++){
		if(b[1][i-1] != b[1][i]){
			bangnhau = false;
		}
	}
	if(bangnhau){
		cout << "NONE";
	}
	else{
		int max = b[1][0];
		for(int i=0; i<m; i++){
			if(max > b[1][i]){
				cout << b[0][i];
				break;
			}
		}
	}
}
