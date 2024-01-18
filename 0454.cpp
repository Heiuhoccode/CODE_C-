#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long int a[n],b[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
			b[i]=a[i]*a[i];
		}
		int m = 0;
		long long int c[n];
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				long long int h = sqrt(a[i]*a[i]+b[j]);
				if((a[i]*a[i]+b[j])==h*h){
					c[m] = h;
					m++;
				}
			}
		}
		int dem1=0;
		for(int i=0;i<m;i++){
			int dem =0;
			for(int j=0;j<n;j++){
				if(a[j]==c[i]){
					dem++;
				}
			}
			if(dem>0){
				dem1++;
			}
		}
		if(dem1>0){
			cout << "YES\n";
		}
		else{
			cout << "NO\n";
		}
	}
}
