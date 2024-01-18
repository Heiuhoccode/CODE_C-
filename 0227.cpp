#include<bits/stdc++.h>

using namespace std;

int main(){
	int T;
	cin >> T;
	while(T--){
		int N;
		cin >> N;
		int Arr[N*N];
		for(int i=0; i<N*N; i++){
			cin >> Arr[i];
		}
		int A[N][N], B[N*N];
		int k = 0;
		for(int i=0; i<N; i++){
			for(int j=0; j<N; j++){
				A[i][j] = Arr[k];
				k++;
			}
		}
		int h = 0;
		for(int i=0; i<N; i++){
			if(i%2==0){
				for(int j=0; j<N; j++){
					B[h] = A[i][j];
					h++;
				}
			}
			else{
				for(int j=N-1; j>=0; j--){
					B[h] = A[i][j];
					h++;
				}
			}
		}
		for(int i=0; i<N*N; i++){
			cout << B[i] << " ";
		}
		cout << endl;
	}
}
