#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,m,p;
	cin >> n >> m >> p;
	int A[n][m], B[m][p];
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin >> A[i][j];
		}
	}
	for(int i=0; i<m; i++){
		for(int j=0; j<p; j++){
			cin >> B[i][j];
		}
	}
	int C[n][p];
	for(int i=0; i<n; i++){
		for(int j=0; j<p; j++){
			int h = 0;
			for(int t=0; t<m; t++){
				h += A[i][t]*B[t][j];
			}
			C[i][j] = h;
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<p; j++){
			cout << C[i][j] << " ";
		}
		cout << endl;
	}
	
	
	
	
	
	
	
}
