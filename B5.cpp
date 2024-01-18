#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int a[n],b[n+1];
		int max = -1e9;
		int vitri;
		for(int i=0; i<n; i++){
			cin >> a[i];
			if(max<a[i]){
				max=a[i];
				vitri = i;
			}
		}
		for(int i=0; i<vitri; i++){
			b[i]=a[i];
		}
		b[vitri]=m;
		for(int i=vitri+1; i<=n; i++){
			b[i]=a[i-1];
		}
		int am[n+1];
		int duong[n+1];
		int h=0,k=0;
		for(int i=0; i<=n; i++){
			if(b[i]<0){
				am[h]=b[i];
				h++;
			}
			else{
				duong[k]=b[i];
				k++;
			}
		}
		
		for(int i=0; i<h; i++){
			cout << am[i] << " ";
		}
		for(int i=0; i<k; i++){
			cout << duong[i] << " ";
		}
		cout << endl;
	}
}
