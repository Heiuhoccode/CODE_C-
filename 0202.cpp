#include <bits/stdc++.h>

using namespace std;

void Result( int A[], int N){
	int min = pow(10,9);
	for(int i=0; i<N-1; i++){
		for(int j=i+1; j<N; j++){
			int h = abs(A[i]-A[j]);
			if(h < min ){
				min = h;
			}	
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
		Result(A,N);
	}
}
