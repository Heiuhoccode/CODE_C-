#include<bits/stdc++.h>

using namespace std;



int sumcs(long long N){
	int sum = 0;
	while(N>0){
		int h = N%10;
		sum += h;
		N/=10;
	}
	return sum;
}
int sumnt(long long N){
	int sum = 0;
	for(int i=2; i<=sqrt(N); i++){
		while(N%i==0){
			sum += sumcs(i);
			N/=i;
		}
	}
	if(N>1){
		sum += sumcs(N);
	}
	return sum;
}
int main(){
	long long N;
	cin >> N;
	if(sumcs(N)==sumnt(N)){
		cout << "YES";
	}
	else cout << "NO";
	
}
