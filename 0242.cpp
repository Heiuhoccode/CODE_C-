#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n], b[n];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		for(int i=0; i<n; i++){
			cin >> b[i];
		}
		int check[n*n];
		int h = 0;
		for(int i=0; i<n-1; i++){
			int cnt_a = a[i];
			int cnt_b = b[i];
			for(int j=i+1; j<n; j++){
				cnt_a += a[j];
				cnt_b += b[j];
				if(cnt_a==cnt_b){
					check[h]=j-i;
					h++;
				}
			}
		}
		int max = 0;
		for(int i=0; i<h; i++){
			if(max<check[i]){
				max = check[i];
			}
		}
		cout << max+1 << endl;
	}
}
