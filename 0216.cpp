#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int A[n];
		for(int i=0; i<n; i++){
			cin >> A[i];
		}
		int L, R;
		cin >> L >> R;
		int B[R-L+1];
		int max = 0;
		int vitri;
		for(int i=L; i<=R; i++){
			B[i-L] = A[i];
			if(max < A[i]){
				max = A[i];
				vitri = i-L;
			}
		}
		bool mountain = true;
		for(int i=1; i<vitri; i++){
			if(B[i-1] > B[i]){
				mountain = false;
			}
		}
		for(int i=vitri+2; i<=R-L; i++){
			if(B[i-1] < B[i]){
				mountain = false;
			}
		}
		if(mountain){
			cout << "Yes" << endl;
		}
		else cout << "No" << endl;
		
	}
	
}
