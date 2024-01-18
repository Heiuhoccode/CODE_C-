#include <bits/stdc++.h>

using namespace std;

int fbnc( long long n){
	if(n==0||n==1){
		return 1;
	}
	else return fbnc(n-1)+fbnc(n-2);
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		int dem =0;
		int i=1;
		while(fbnc(i)<n){
			i++;
		}
		if(fbnc(i)==n){
			cout << "YES" << endl;
		}
		else cout << "NO" << endl;
	}
}
