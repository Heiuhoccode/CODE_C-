#include<bits/stdc++.h>

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
		int max = -1;		
		for(int i=0; i<n-1; i++){
			for(int j=i+1; j<n; j++){
				int h = A[j]-A[i];
				if(h > max){
					max = h;
				}
			}
		}
		if(max < 0){
			cout << -1 << endl;
		}
		else{
			cout << max << endl;	
		}	
	}
}
