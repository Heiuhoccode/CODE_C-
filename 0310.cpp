#include<bits/stdc++.h>

using namespace std;

long long change_min(char a[]){
	long long h = 0;
	for(int i=0; i<strlen(a); i++){
		if(a[i]=='6'){
			a[i]='5';
		}
	}
	for(int i=0; i<strlen(a); i++){
		long long cnt = (a[i]-'0')*pow(10,strlen(a)-i-1);
		h += cnt;
	}
	return h;
}

long long change_max(char a[]){
	long long h = 0;
	for(int i=0; i<strlen(a); i++){
		if(a[i]=='5'){
			a[i]='6';
		}
	}
	for(int i=0; i<strlen(a); i++){
		long long cnt = (a[i]-'0')*pow(10,strlen(a)-i-1);
		h += cnt;
	}
	return h;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		char a[19], b[19];
		cin >> a;
		cin >> b;
		cout << change_min(a) + change_min(b) << " " << change_max(a) + change_max(b) << endl;
	}
}
