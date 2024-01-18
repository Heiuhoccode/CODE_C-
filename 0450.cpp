#include <bits/stdc++.h>

using namespace std;

void remake(int a[], int n, int &h){
	int b = n;
	for(int i=0; i<b; i++){
		for(int j=i+1; j<b; j++){
			if(a[i]==a[j]){
				h = a[i];
				b=j;
				break;
			}
		}
	}
}

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
		int h = 0;
		remake(a,n,h);
		if(h==0){
			cout << -1 << endl;
		}
		else{
			cout << h << endl;
		}
	}
}
