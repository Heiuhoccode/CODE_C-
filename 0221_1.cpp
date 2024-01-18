#include <bits/stdc++.h>

using namespace std;

int main(){
	int T;
	cin >> T;
	while(T--){
		int N,M;
		cin >> N >> M;
		int B[N][M], A[N][M];
		for(int i=0; i<N; i++){
			for(int j=0; j<M; j++){
				cin >> B[i][j];
			}
		}
		int k=0;
		int r = 0;
		int c = 0;
		while(k<(N*M)){
			int a = B[r][c];
			for(int i=r+1; i<N-r; i++){
				B[i-1][c] = B[i][c];
				k++;
			}
			if(k>=(N*M)){
				break;
			}
			for(int i=c+1; i<M-c; i++){
				B[N-r-1][i-1] = B[N-r-1][i];
				k++;
			}
			if(k>=(N*M)){
				break;
			}
			for(int i=N-r-1; i>=r+1; i--){
				B[i][M-c-1] = B[i-1][M-c-1];
				k++;
			}
			if(k>=(N*M)){
				break;
			}
			for(int i=M-c-1; i>=c+2; i--){
				B[r][i] = B[r][i-1];
				k++;
			}
			if(k>=(N*M)){
				break;
			}
			B[r][c+1] = a;
			k++;
			if(k>=(N*M)-1){
				break;
			}
			r++;
			c++;
		}
		for(int i=0; i<N; i++){
			for(int j=0; j<M; j++){
				cout << B[i][j] << " ";
			}
		}
		cout << endl;
	}
}