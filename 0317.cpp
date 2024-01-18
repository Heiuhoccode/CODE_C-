#include<bits/stdc++.h>

using namespace std;

int sc( char *a){
	for(int i=0; i<strlen(a); i++){
		if(a[i]%2!=0){
			return 0;
		}
	}
	return 1;
}

int stn( char *a){
	for(int i=0; i<strlen(a)/2; i++){
		if(a[i]!=a[strlen(a)-1-i]){
			return 0;
		}
	}
	return 2;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		char so[501];
		cin >> so;
		if(sc(so)==1&&stn(so)==2){
			cout << "YES" << endl;
		}
		else cout << "NO" << endl;
	}
}
