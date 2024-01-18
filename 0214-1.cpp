#include<bits/stdc++.h>

using namespace std;

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
		int max = -1;
		for(int i=0; i<=n-k; i++){
			for(int j=0; j<k; j++){
				if(a[i+j] > max){
					max = a[i+j];
				}
			}
			cout << max << " ";
		}
		cout << endl;
	}
}
