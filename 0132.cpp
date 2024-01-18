#include <bits/stdc++.h>

using namespace std;

long long snt(long long a){
	if(a==0||a==1){
		return 0;
	}
	for(long long i=2;i<=sqrt(a);i++){
		if(a%i==0){
			return 0;
		}
	}
	return 1;
}

int main(){
	int n;
	cin>>n;
	while(n--){
		long long a;
		cin >> a;
		long long b=a;
		if(snt(a)==1){
			cout << a << endl;
		}
		else {
			long long h;
			for(long long i=2;i<=sqrt(b);i++){
				while(a%i==0){
					h=i;
					a/=i;
				}
				if(snt(a)==1){
					h=a;
				}
			}
			cout << h << endl;
		}	
	}
}
