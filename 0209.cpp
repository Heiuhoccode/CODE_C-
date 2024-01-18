#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int A[n], Q[m][2];
		for(int i=0; i<n; i++){
			cin >> A[i];
		}
		for(int i=0; i<m; i++){
			for(int j=0; j<2; j++){
				cin >> Q[i][j];
			}
		}
		for(int i=0; i<m; i++){
			int result = 0;
			for(int j=Q[i][0]-1; j<=Q[i][1]-1; j++){
				result += A[j];
			}
			cout << result << endl;
		}
		cout << endl;		
	}

}
