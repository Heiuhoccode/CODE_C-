#include <bits/stdc++.h>

using namespace std;

void sx(int A[], int N){
	bool ascending;
	do{
		ascending = false;
		for(int i=1; i<N; i++){
			if(A[i-1] > A[i]){
				int swap = A[i-1];
				A[i-1] = A[i];
				A[i] = swap;
				ascending = true;
			}
		}
	}while(ascending);
}

int main(){
	int N;
	cin >> N;
	int A[N*N], B[N][N];g
	for(int i=0; i<N*N; i++){
		cin >> A[i];
	}
	sx(A,N*N);
	int k=0;
	int row = 0;
	int column = 0;
	while(k<(N*N)){
		for(int j=column; j<N-column; j++){
			B[row][j] = A[k];
			k++;
		}
		if(k==N*N){
			break;
		}
		for(int i=row+1; i<N-row; i++){
			B[i][N-column-1] = A[k];
			k++;
		}
		if(k==N*N){
			break;
		}
		for(int j=N-column-2; j>=column; j--){
			B[N-row-1][j] = A[k];
			k++;
		}
		if(k==N*N){
			break;
		}
		for(int i=N-row-2; i>=row+1; i--){
			B[i][column] = A[k];
			k++;
		}
		if(k==N*N){
			break;
		}
		row++;
		column++;
	}
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			cout << B[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
