#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		int dem =0;
		int a=0;
		int b=1;
		long long c;
		do{
			c=a+b;
			a=b;
			b=c;
		}while(c<n);
		if(c==n){
			cout << "YES" << endl;
		}
		else cout << "NO" << endl;
	}
}
