#include<bits/stdc++.h>

using namespace std;


int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n][n];
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				cin >> a[i][j];
			}
		}
		int row[n]={0}, column[n]={0};
		int maxr = 0, maxc = 0;
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				row[i] += a[i][j];
			}
			if(maxr < row[i]){
				maxr = row[i];
			}
		}
		for(int j=0; j<n; j++){
			for(int i=0; i<n; i++){
				column[j] += a[i][j];
			}
			if(maxc < column[j]){
				maxc = column[j];
			}
		}
//		cout << maxr << " " << maxc << endl;
		if(maxr > maxc){
			int result = 0;
			for(int i=0; i<n; i++){
				result += maxr - column[i];	
			}	
			cout << result << endl;
		}
		else if(maxr < maxc){
			int result1 = 0;
			for(int i=0; i<n; i++){
				result1 += abs(maxc - row[i]);
			}
			cout << result1 << endl;
		}
		else{
			int h1 = 0;
			int h2 = 0;
			for(int i=0; i<n; i++){
				h1 += maxc - row[i];
			}
			for(int i=0; i<n; i++){
				h2 += maxr - column[i];
			}
			if(h1 < h2 ){
				cout << h1 << endl;
			}
			else cout << h2 << endl;
		}
	}
}
