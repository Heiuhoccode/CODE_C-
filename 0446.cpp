#include<bits/stdc++.h>

using namespace std;

int change(int a[], int n){
	int min = 1e9;
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(abs(min) > abs(a[i]+a[j])){
				min = (a[i]+a[j]);
			}
			
		}
	}
	return min;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		cout << change(a, n) << endl;
	}
}
