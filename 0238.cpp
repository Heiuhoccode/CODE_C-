#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		char a[n][m];
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				cin >> a[i][j];
			}
		}
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				if(i!=0 && j!=0 && i!=n-1 && j!=m-1){
					a[i][j] = 'X';
				}
			}
		}
		
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				cout << a[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;
	}
	
}
