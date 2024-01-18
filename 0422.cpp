#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long a[n];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		int x=0, y=0;
		long long khac0[n], bang0[n];
		for(int i=0; i<n; i++){
			if(a[i]==0){
				bang0[x] = a[i];
				x++;
			}
			else{
				khac0[y] = a[i];
				y++;
			}
		}
		for(int i=0; i<y; i++){
			cout << khac0[i] << " ";
		}
		for(int i=0; i<x; i++){
			cout << bang0[i] << " ";
		}
		cout << endl;		
	}

}
