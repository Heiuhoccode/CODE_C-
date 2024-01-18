#include<bits/stdc++.h>

using namespace std;

int tn(int a,int n){
	int b = a;
	int cnt = 0;
	while(a>0){
		cnt = cnt+ pow(10,n-1)* (a%10);
		a/=10;
		n--;
	}
	if(cnt == b){
		return 1;
	}
	return 0;
}

int main(){
	int n; cin >> n;
	long long sum = 0;
	long long max = pow(10,n);
	long long min = pow(10,n-1);
	for(int i=min;i<max;i++){
		if(tn(i,n)){
			sum +=i;
		}
	}
	cout << sum << endl;
}
