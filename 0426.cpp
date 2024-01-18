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
		int min[n], max[n];
		int h = 0;
		for(int i=0; i<n; i++){
			if(i<n/2){
				min[i] = a[i];
			}
			else{
				max[h] = a[i];
				h++;
			}
		}
		if(n%2==0){
			for(int i=0; i<h; i++){
				cout << max[h-1-i] << " " << min[i]<< " ";
			}	
		}
		else{
			for(int i=0; i<h-1; i++){
				cout << max[h-1-i] << " " << min[i]<< " ";
			}
			cout << max[0];
		}
		cout << endl;
	}
}
