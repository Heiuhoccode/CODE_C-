#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		bool ascending;
		do{
			ascending = false;
			for(int i=1; i<n; i++){
				if(a[i-1]>a[i]){
					swap(a[i-1],a[i]);
					ascending = true;
				}
			}
		}while(ascending);
		for(int i=0; i<n/2; i++){
			cout << a[n-i-1] << " " << a[i] << " ";
		}
		if(n%2!=0){
			cout << a[n/2];
		}
		cout << endl;
	}
}
