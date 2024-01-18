#include<bits/stdc++.h>

using namespace std;

void loai_trungnhau(int a[], int b[], int &h, int n){
	for(int i=0; i<n; i++){
		if(a[i]!=0){
			for(int j=i+1; j<n; j++){
				if(a[j]!=0 && a[i]==a[j]){
					a[j]=0;
				}
			}
			b[h] = a[i];
			h++;
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
		sort(a,a+n);
		int b[n];
		int h = 0;
		loai_trungnhau(a,b,h,n);
		if(h<2){
			cout << -1 ;
		}
		else{
			for(int i=0; i<2; i++){
				cout << b[i] << " ";
			}
		}
		cout << endl;
	}
}
