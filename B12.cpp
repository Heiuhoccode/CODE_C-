#include<bits/stdc++.h>

using namespace std;

int result(long long f[], long long n){
	for(int i=0; i<92; i++){
		if(n==f[i]){
			return 1;
		}
		if(n<f[i]){
			return 0;
		}
	}
	return 0;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		long long f[92];
		f[0]=0;
		f[1]=1;
		for(int i=2;i<92;i++){
			f[i]=f[i-1]+f[i-2];
		}
		if(result(f,n)==1){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
}
