#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, X;
		cin >> n >> X;
		int a[n];
		int cnt = 0;
		for(int i=0; i<n; i++){
			cin >> a[i];
			if(a[i]==X){
				cnt++;
			}
		}
		if(cnt == 0){
			cout << -1 << endl;
		}
		else cout << cnt << endl;
	}
}
