#include<bits/stdc++.h>

using namespace std;

int sum(int a){
	int tong = 0;
	while(a>0){
		int h = a%10;
		tong += h;
		a/=10;
	}
	return tong;
}

int min (int m, int s){
	for(int i=pow(10,m-1); i<pow(10,m); i++){
		if(sum(i)==s){
			return i;
		}
	}
}


int max (int m, int s){
	for(int i=pow(10,m)-1; i>=pow(10,m-1); i--){
		if(sum(i)==s){
			return i;
		}
	}
}
int main(){
	int m,s;
	cin >> m>>s;
	cout << min(m,s) << " " << max(m,s);
}
