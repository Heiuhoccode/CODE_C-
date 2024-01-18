#include <bits/stdc++.h>

using namespace std;


int main(){
	int T;
	cin >> T;
	while(T--){
		int n,m;
		cin >> n >> m;
		int a[n][m];
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				cin >> a[i][j];
			}
		}
		int hd = 0, hc = n-1;
		int cd = 0, cc = m-1;
		while(hd < hc && cd < cc){
			int tem = a[hd+1][cd];
			for(int i=cd; i<=cc; i++){
				int cnt = a[hd][i];
				a[hd][i] = tem;
				tem = cnt;
			}
			hd++;
			for(int i=hd; i<=hc; i++){
				int cnt = a[i][cc];
				a[i][cc] = tem;
				tem = cnt;
			}
			cc--;
			if(hd<=hc){
				for(int i=cc; i>=cd;i--){
					int cnt = a[hc][i];
					a[hc][i] = tem;
					tem = cnt;
				}
				hc--;
			}
			if(cd<=cc){
				for(int i=hc; i>=hd;i--){
					int cnt = a[i][cd];
					a[i][cd] = tem;
					tem = cnt;
				}
				cd++;
			}
		}
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				cout << a[i][j] << " ";
			}
		}
		cout << endl;
	}
}