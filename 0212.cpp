#include <bits/stdc++.h>

using namespace std;

int result(int a[], int n, int x){
	int ct = 1000000007;
	int y = x%(ct);
	int cnt = 0;
	for(int i=0; i<n; i++){
		int h = ((a[i]%(ct))*pow(y,n-i-1));
		int k = h%ct;
		cnt += k;
	}
	return cnt%(ct);
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, x;
		cin >> n >> x;
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		cout << result(a,n,x) << endl;
	}
}
