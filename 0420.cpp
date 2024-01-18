#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, X;
		cin >> n >> X;
		int a[n];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		int kc[n];
		for(int i=0; i<n; i++){
			kc[i] = abs(X-a[i]);
		}
		bool ascending;
		do{
			ascending = false;
			for(int i=1; i<n; i++){
				if(kc[i-1]>kc[i]){
					int temp = kc[i-1];
					kc[i-1] = kc[i];
					kc[i] = temp;
					
					int temp1 = a[i-1];
					a[i-1] = a[i];
					a[i] = temp1;
					
					ascending = true;
				}
			}
		}while(ascending);
		for(int i=0; i<n; i++){
			cout << a[i] << " ";
		}
		cout << endl;
	}
}
