#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	while(n--){
		int a,m;
		cin >> a >> m;
		int x = 0;
		while(x<m){
			if((x*a)%m==1){
				break;
			}
			x++;
		}
		if(x>=m){
			cout << -1 << endl;
		}
		else{
			cout << x << endl;
		}
	}
}
