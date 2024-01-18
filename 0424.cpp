#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> k >> n;
		int a[n*k];
		for(int i=0; i< n*k; i++){
			cin >> a[i];
		}
		sort(a,a+n*k);
		for(int i=0; i<n*k; i++){
			cout << a[i] << " ";
		}
		cout << endl;
	}
}
