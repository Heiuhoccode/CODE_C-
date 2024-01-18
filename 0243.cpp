#include<bits/stdc++.h>

using namespace std;

void sx(int d[], int k){
	bool ascending;
	do{
		ascending = false;
		for(int i=1; i<k; i++){
			if(d[i-1]>d[i]){
				swap(d[i-1],d[i]);
				ascending = true;
			}
		}
	}while(ascending);
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		int a[n], b[m];
		int c[n];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		for(int i=0; i<m; i++){
			cin >> b[i];
		}
		int h = 0;
		for(int i=0; i<m; i++){
			for(int j=0; j<n; j++){
				if(a[j] == b[i]){
					c[h] = a[j];
					a[j] = 0;
					h++;
				}
			}
		}
		int d[n];
		int k = 0;
		for(int i=0; i<n; i++){
			if(a[i]!=0){
				d[k] = a[i];
				k++;
			}
		}
		sx(d,k);
		for(int i=0; i<h; i++){
			cout << c[i] << " ";
		}
		for(int i=0; i<k; i++){
			cout << d[i] << " ";
		}		
		cout << endl;
	}

}
