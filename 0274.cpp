#include<bits/stdc++.h>

using namespace std;

int main(){
	int T;
	cin >> T;
	while(T--){
		int N;
		cin >> N;
		int A[N];
		for(int i=0; i<N; i++){
			cin >> A[i];
		}
		int result = 0;
		for(int i=0; i<N; i++){
			for(int j=0; j<N; j++){
				if(A[i]==A[j]&&i!=j){
					result++;
					break;
				}
			}
		}
		cout << result << endl;
	}
}
