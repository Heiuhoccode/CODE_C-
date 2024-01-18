#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		int x[n][m];
		int h[3][3];
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				cin >> x[i][j];
			}
		}
		for(int i=0; i<3; i++){
			for(int j=0; j<3; j++){
				cin >> h[i][j];
			}
		}
		int sum = 0;
		if(n==3 && m==3){
			for(int i=0; i<n/3; i++){
				for(int j=0; j<m/3; j++){
					for(int u=0; u<3; u++){
						for(int v=0; v<3; v++){
							sum += h[v][u]*x[i+u][j+v];
						}
					}
				}
			}
			cout << sum << endl;		
		}
		else if(n==3 && m!=3){
			for(int i=0; i<n/3; i++){
				for(int j=0; j<=m/3; j++){
					for(int u=0; u<3; u++){
						for(int v=0; v<3; v++){
							sum += h[v][u]*x[i+u][j+v];
						}
					}
				}
			}
			cout << sum << endl;			
		}
		else if(n!=3 && m==3){
			for(int i=0; i<=n/3; i++){
				for(int j=0; j<m/3; j++){
					for(int u=0; u<3; u++){
						for(int v=0; v<3; v++){
							sum += h[v][u]*x[i+u][j+v];
						}
					}
				}
			}
			cout << sum << endl;			
		}
		else{
			for(int i=0; i<=n/3; i++){
				for(int j=0; j<=m/3; j++){
					for(int u=0; u<3; u++){
						for(int v=0; v<3; v++){
							sum += h[v][u]*x[i+u][j+v];
						}
					}
				}
			}
			cout << sum << endl;		
		}		
	}
}
