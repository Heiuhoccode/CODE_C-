#include <bits/stdc++.h>

using namespace std;

void Faster() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int main(){
	Faster();
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		int max = 0;
		for(int i=0; i<n-1; i++){
			for(int j=n-1; j>=i+1; j--){
				if(a[i] < a[j] && max < (j-i) ){
					max = j-i;
					break;
				}
			}
		}
		cout << max << endl;
	}
}
