#include <bits/stdc++.h>

using namespace std;

int chiahet(int m, int n, int a, int b){
	int dem = 0;
	for(int i=m;i<=n;i++){
		if(i%a!=0 && i%b!=0 ){
			dem++;
		}
	}
	return dem;
}


int main(){
	int n;
	cin >> n;
	while(n--){
		int m, n, a, b;
		cin >> m >> n >> a >> b;
		int h = n-m+1-chiahet(m,n,a,b);
		cout << h << endl;
	}
}
