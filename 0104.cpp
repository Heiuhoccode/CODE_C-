#include<iostream>
using namespace std;
long long int gt(int n){
	if(n==1||n==0){
		return 1;
	}
	else return n*gt(n-1);
}
int main(){
	int n;
	cin >> n;
	long long sum =0;
	for(int i=0;i<n;i++){
		sum += gt(i+1);
	}
	cout << sum;
}
