#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		int min = 1e9;
		for(int i=0; i<n; i++){
			cin >> a[i];
			if(min > a[i]){
				min = a[i];
			}
		}
		int dem = 0;
		int i=1;
		while(i<min){
			int h = a[0]%i;
			bool dongdu = true;
			for(int j=1; j<n; j++){
				if(a[j]%i != h){
					dongdu = false;
					break;
				}
			}
			if(dongdu){
				dem++;
			}
			i++;
		}
		cout << dem << endl;
	}
}
