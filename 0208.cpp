#include <bits/stdc++.h>

using namespace std;

void Arrange ( int A[], int N){
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
	int n;
	cin >> n;
	while(n--){
		int N,k;
		cin >> N >> k;
		int A[N];
		for(int i=0; i<N; i++){
			cin >> A[i];
		}
		Arrange(A,N);
		cout << A[k-1] << endl;
	}
}
