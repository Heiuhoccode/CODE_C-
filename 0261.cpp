#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,m;
	cin >> n;
	int a[n][n]; 
	int c[n][n];
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin >> a[i][j];
		}
	}
	cin >> m;
	int b[m][m];
	for(int i=0; i<m; i++){
		for(int j=0; j<m; j++){
			cin >> b[i][j];
		}
	}
	int tile = n/m;
	for(int h=0; h<tile; h++){
		for(int k=0; k<tile; k++){
			for(int i=0; i<m; i++){
				for(int j=0; j<m; j++){
					c[i+h*m][j+k*m] = b[i][j];
				}
			}	
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			a[i][j] = a[i][j]*c[i][j];
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
