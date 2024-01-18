#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n][n];
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				cin >> a[i][j];
			}
		}
		int check[n];
		
		for(int i=0; i<n ;i++){
			check[i] = a[0][i];
		}
		
		for(int i=1; i<n; i++){
			for(int z=0; z<n ;z++){
				if(check[z]!=0){
					int cnt = 0;
					for(int j=0; j<n; j++){
						if(check[z]==a[i][j]){
							cnt++;
						}
					}
					if(cnt==0){
						check[z]=0;
					}
				}
			}
		}
		int dem = 0;
		
		for(int i=0; i<n-1; i++){
			if(check[i]!=0)
			for(int j=i+1; j<n; j++){
				if(check[i]==check[j] && check[j]!=0){
					check[j] = 0;
				}
			}
		}
		for(int i=0; i<n; i++){
			if(check[i]!=0){
				dem++;
			}
		}
		cout << dem << endl;
	}
}
