#include<bits/stdc++.h>

using namespace std;

bool cmp(const int a, const int b){
	return a > b;
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
		sort(a, a+n, cmp);
		for(int i=0; i<k; i++){
			cout << a[i] << " ";
		}
		cout << endl;
	}
}
