#include<bits/stdc++.h>

using namespace std;

long long sumcs(long long n){
	long long sum = 0;
	while(n>0){
		int h = n%10;
		sum += h;
		n/=10;
	}
	return sum;
}

int main(){
	long long n;
	cin >> n;
	long long n1=n;
	long long sum = 0;
	for(long long i=2; i<=sqrt(n); i++){
		while(n%i==0){
			sum += sumcs(i);
			n/=i;
		}
	}
	if(n!=1){
		sum += sumcs(n);
	}
	if(sum == sumcs(n1)){
		cout << "YES" ;
	}
	else{
		cout << "NO";
	}
	
}
