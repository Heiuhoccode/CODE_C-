#include <bits/stdc++.h>

using namespace std;

int main(){
	int T;
	cin >> T;
	while(T--){
		int N,M;
		cin >> N >> M;
		int A[N*M], B[N][M];
		for(int i=0; i<N; i++){
			for(int j=0; j<M; j++){
				cin >> B[i][j];
			}
		}
		int k=0;
		int row = 0;
		int column = 0;
		while(k<(N*M)){
			for(int j=column; j<M-column; j++){
				A[k] = B[row][j];
				k++;
			}
			if(k==N*M){
				break;
			}
			for(int i=row+1; i<N-row; i++){
				A[k] = B[i][M-column-1];
				k++;
			}
			if(k==N*M){
				break;
			}
			for(int j=M-column-2; j>=column; j--){
				A[k] = B[N-row-1][j];
				k++;
			}
			if(k==N*M){
				break;
			}
			for(int i=N-row-2; i>=row+1; i--){
				A[k] = B[i][column];
				k++;
			}
			if(k==N*M){
				break;
			}
			row++;
			column++;
		}
		for(int i=N*M-1; i>=0; i--){
			cout << A[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
