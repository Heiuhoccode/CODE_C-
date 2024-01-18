#include<bits/stdc++.h>

using namespace std;

int tim_R(int a[], int n){
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(a[i]>a[j]){
				return i;
			}
		}
	}
	return -1;
}

int tim_L(int a[], int n){
	for(int i=n-1; i>=1; i--){
		for(int j=i-1; j>=0; j--){
			if(a[i]<a[j]){
				return i;
			}
		}
	}
	return -1;
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
		int R = tim_R(a,n)+1;
		int L = tim_L(a,n)+1;
		cout << R << " " << L << endl;
	}
}
