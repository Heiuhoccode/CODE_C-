#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k,x;
		cin >> n;
		vector<int> a(n);
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		cin >> k >> x;
		int moc;
		for(int i=0; i<n; i++){
			if(a[i]==x){
				moc = i;
				break;
			}
		}
		for(int i=0; i<k/2; i++){
			cout << a[i+moc-k/2] << " ";
		}
		for(int i=k/2; i<k; i++){
			cout << a[i+moc-k/2+1] << " ";
		}
		cout << endl;
	}
}
