#include <bits/stdc++.h>

using namespace std;

int main(){
	int T;
	cin >> T;
	while(T--){
		int N,M;
		cin >> N >> M;
		int A[N][M];
		for(int i=0; i<N; i++){
			for(int j=0; j<M; j++){
				cin >> A[i][j];
			}
		}
		int row[N]={0};
		int column[M]={0};
		for(int i=0; i<N; i++){
			for(int j=0; j<M; j++){
				if(A[i][j]==1){
					row[i]=1;
					column[j]=1;
				}
			}
		}
		for(int i=0; i<N; i++){
			if(row[i]==1){
				for(int j=0; j<M; j++){
					A[i][j] = 1;
				}
			}
		}
		for(int j=0; j<M; j++){
			if(column[j] == 1){
				for(int i=0; i<N; i++){
					A[i][j] = 1;
				}			
			}
		}		
		for(int i=0; i<N; i++){
			for(int j=0; j<M; j++){
				cout << A[i][j] << " ";
			}
			cout << endl;
		}		
	}
}
