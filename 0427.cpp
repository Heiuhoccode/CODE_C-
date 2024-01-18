#include<bits/stdc++.h>

using namespace std;

void change(int a[], int n){
	for(int i=0; i<n-1; i++){
		if(a[i]==a[i+1] && a[i+1]!=0){
			a[i]*=2;
			a[i+1]=0;
		}
	}
}

void result(int a[], int n){
	int hl[n], khl[n];
	int x=0,y=0;
	for(int i=0; i<n; i++){
		if(a[i]!=0){
			hl[x] = a[i];
			x++;
		}
		if(a[i]==0){
			khl[y] = a[i];
			y++;
		}
	}
	for(int i=0; i<x; i++){
		cout << hl[i] << " ";
	}
	for(int i=0; i<y; i++){
		cout << khl[i] << " ";
	}
	cout << endl;
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
		change(a,n);
		result(a,n);
	}
}
