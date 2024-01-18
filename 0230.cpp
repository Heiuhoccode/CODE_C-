#include <bits/stdc++.h>

using namespace std;

int main(){
	int N;
	cin >> N;
	int A[N][3];
	for(int i=0; i<N; i++){
		for(int j=0; j<3; j++){
			cin >> A[i][j];
		}
	}
	int dem = 0;
	for(int i=0; i<N; i++){
		int so1 = 0, so0 = 0;
		for(int j=0; j<3; j++){
			if(A[i][j]==1){
				so1++;
			}
			if(A[i][j]==0){
				so0++;
			}
		}
		if(so1>so0){
			dem++;
		}
	}
	cout << dem;
}
