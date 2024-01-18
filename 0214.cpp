#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,k;
	cin >> n >> k;
	int m = n-k+1;
	int a[n], b[m];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	for(int i=0; i<m; i++){
		b[i] = a[i+k-1];
	}
	
	int max = b[0];
	for(int i=1; i<m; i++){
		if(b[i] < max){
			b[i] = max;
		}
		else max = b[i];
	}
	for(int i=0; i<m; i++){
		cout << b[i] << " ";
	}
}
