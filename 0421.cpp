#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long a[n];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		for(int i=0; i<n; i++){
			if(a[i]>n-1){
				a[i] = -1;
			}
		}
		int check[n]={0};
		for(int i=0; i<n; i++){
			if(a[i]>=0){
				check[a[i]] = 1;
			}
		}
		for(int i=0; i<n; i++){
			if(check[i] == 1){
				cout << i << " ";
			}
			else cout << -1 << " ";
		}
		cout << endl;	
	}
}
