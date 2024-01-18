#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		int a[n];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		bool giamdan;
		do{
			giamdan = false;
			for(int i=1; i<n; i++){
				if(a[i-1] < a[i]){
					swap(a[i-1],a[i]);
					giamdan = true;
				}
			}
		}while(giamdan);
		for(int i=0; i<k; i++){
			cout << a[i] << " ";
		}
		cout << endl;
	}
}
