#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		int A[n][n];
		int B[n*n];
		int h = 0;
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				cin >> A[i][j];
				B[h] = A[i][j];
				h++;
			}
		}
		
		bool ascending;
		do{
			ascending = false;
			for(int i=1; i<n*n; i++){
				if(B[i-1] > B[i]){
					int swap = B[i-1];
					B[i-1] = B[i];
					B[i] = swap;
					ascending = true;
				}
			}
		}while(ascending);
		cout << B[k-1] << endl;
	}
}
