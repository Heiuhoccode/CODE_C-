#include<bits/stdc++.h>

using namespace std;


int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		char name[1000];
		cin.getline(name,1000);
		int n;
		cin >> n;
		long long a[n];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		long long sum = 0;
		long long thunhap = 0;
		for(int i=0; i<n; i++){
			if(a[i]<0){
				sum += a[i];
			}
			else{
				thunhap += a[i];
			}
		}
		if( sum <= -1e8 && thunhap>sum){
			cout << "YES" << endl;
		}
		else cout << "NO" << endl;
	}
}
