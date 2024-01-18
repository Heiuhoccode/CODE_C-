#include <iostream>
#include <cmath>
#include <stdbool.h>

using namespace std;

long long snt( long long a){
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

long long tang_giam ( long long a, int b){
	int tang = 0;
	int giam = 0;
	int h = a%10;
	a/=10;
	while(a>0){
		int k=a%10;
		if(k>h){
			giam++;
		}
		else if(k<h){
			tang++;
		}
		h=k;
		a/=10;
	}
	return giam;
}

int main(){
	int n;
	cin >> n;
	while(n--){
		int a;
		cin >> a;
		int dem = 0;
		for(long long i=pow(10,a-1);i<pow(10,a);i++){
			cout << i << " " << tang_giam(i,a) << endl;
		}
	}
}
