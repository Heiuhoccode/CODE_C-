#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	float a[n][4];
	for(int i=0; i<n; i++){
		for(int j=0; j<3; j++){
			cin >> a[i][j];
		}
	}
	for(int i=0;i<n; i++){
		a[i][3] = 0.7*a[i][1] + 0.3*a[i][2];
	}
	bool sx;
	do{
		sx = false;
		for(int i=1; i<n; i++){
			if(a[i-1][3]<a[i][3]){
				swap(a[i-1][3],a[i][3]);
				swap(a[i-1][2],a[i][2]);
				swap(a[i-1][1],a[i][1]);
				swap(a[i-1][0],a[i][0]);
				sx = true;
			}
		}
	}while(sx);
	int b[7];
	for(int i=0; i<7; i++){
		
		b[i] = a[i][0];
	}
	sort(b,b+7);
	for(int i=0; i<7; i++){
		
		cout << b[i] << " ";
	}
	
}
