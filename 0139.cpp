#include <bits/stdc++.h>

using namespace std;

int snt(int a){
	if(a<=1){
		return 1;
	}
	for(int i=2; i<=sqrt(a); i++){
		if(a%i==0){
			return 1;
		}
	}
	return 0;
}

int sumnb(int a){
	int sum = 0;
	while(a>0){
		sum += a%10;
		a/=10;
	}
	return sum;
}

int sumnt(int a){
	int sum = 0;
	for(int i=2; i<=sqrt(a); i++){
		while(a%i==0){
			sum += sumnb(i);
			a/=i;
		}
	}
	if(a>1){
		sum += sumnb(a);
	}
	return sum;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int a;
		cin >> a;
		if(snt(a)==1 && sumnb(a) == sumnt(a)){
			cout << "YES" << endl;
		}
		else cout << "NO" << endl;
	}
}
