#include <bits/stdc++.h>

using namespace std;

int main(){
	int T;
	cin >> T;
	while(T--){
		int N;
		cin >> N;
		int A[N*N], B[N][N];
		for(int i=0; i<N*N; i++){
			cin >> A[i];
		}
		int k=0;
		for(int i=0; i<N; i++){
			for(int j=0; j<N; j++){
				B[i][j] = A[k];
				k++;
			}
		}
		for(int i=0; i<N; i++){
			for(int j=0; j<N; j++){
				if(j==0 || i==0 || i==N-1 || j==N-1){
					cout << B[i][j] << " ";
				}
				else cout << "  ";
			}
			cout << endl;
		}
		cout << endl;
	}
	return 0;
}
