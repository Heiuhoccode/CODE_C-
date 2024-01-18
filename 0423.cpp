#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[n];
		int soluong = 0;
		for(int i=0; i<n; i++){
			cin >> a[i];
			if(a[i]<=k){
				soluong++;
			}
		}
		int trong = 0;
		for(int i=0; i<soluong; i++){
			if(a[i]>k){
				trong++;
			}
		}
		int cnt = trong;
		for(int i=soluong; i<n; i++){
			if(a[i]>k) cnt++;
			if(a[i-soluong]>k) cnt--; 
			cnt = min(cnt,trong);
		}
		cout << cnt << endl;
	}
}
