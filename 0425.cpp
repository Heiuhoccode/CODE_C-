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
		sort(a,a+n);
		int be[n], lon[n];
		int h = 0;
		for(int i=0; i<n; i++){
			if(i<n-n/2){
				be[i] = a[i];
			}
			else{
				lon[h] = a[i];
				h++;
			}
		}
		for(int i=0; i<h; i++){
			cout << be[i] << " "<< lon[i] << " ";
		}
		if(n%2!=0){
			cout << be[h];
		}
		cout << endl;
	}
}
