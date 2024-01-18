#include <bits/stdc++.h>

using namespace std;

void fbnc( int a){
	long long fb[a];
	fb[0]=1;
	fb[1]=1;
	for(int i=2;i<a;i++){
		fb[i]=fb[i-1]+fb[i-2];
	}
	cout << fb[a-1] << endl;
}

int main(){
	int n;
	cin >> n;
	while(n--){
		int a;
		cin >> a;
		fbnc(a);
	}
}
