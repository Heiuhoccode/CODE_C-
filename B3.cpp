#include<bits/stdc++.h>

using namespace std;

int result(int a[], int n){
	for(int i=0; i<n-1; i++){
		for(int j=i+1;j<n;j++){
			if(a[i]==a[j]){
				return a[i];
			}
		}
	}
	return 0;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i=0; i<n;i++){
			cin >> a[i];
		}
		if(result(a,n)==0){
			cout << "NO" << endl;
		}
		else cout << result(a,n) << endl;
	}
}
