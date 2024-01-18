#include <bits/stdc++.h>

using namespace std;

void Result( int A[], int N){
	int min = pow(10,9);
	for(int i=1; i<N; i++){
		int h = A[i]-A[i-1];
		if(h < min ){
			min = h;
		}	
	}
	cout << min << endl;
}

int main(){
	int n;
	cin >> n;
	while(n--){
		int N;
		cin >> N;
		int A[N];
		for(int i=0; i<N; i++){
			cin >> A[i];
		}
		bool ascending;
		do{
			ascending = false;
			for(int i=1; i<N; i++){
				if(A[i-1]>A[i]){
					int swap = A[i-1];
					A[i-1] = A[i];
					A[i] = swap;
					ascending = true;
				}
			}
		}while(ascending);
		Result(A,N);
	}
}
