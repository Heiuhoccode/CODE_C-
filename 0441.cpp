#include<bits/stdc++.h>

using namespace std;

int result(int a[], int n, int k){
	for(int i=0; i<n; i++){
		if(a[i]==k){
			return i+1;
		}
	}
	return -1;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[n];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		cout << result(a,n,k) << endl;
	}
}
