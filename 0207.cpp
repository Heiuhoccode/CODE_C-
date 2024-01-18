#include <bits/stdc++.h>

using namespace std;

void Result( int A[],int B[], int N, int k){
	for(int i=0; i<N; i++){
		if(i<k){
			B[i+N-k] = A[i];
		}
		else{
			B[i-k] = A[i];
		}
	}
}

int main(){
	int n;
	cin >> n;
	while(n--){
		int N,k;
		cin >> N >> k;
		int A[N], B[N];
		for(int i=0; i<N; i++){
			cin >> A[i];
		}
		Result(A,B,N,k);
		for(int i=0; i<N; i++){
			cout << B[i] << " ";
		}
		cout << endl;
	}
}
