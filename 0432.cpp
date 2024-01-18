#include<bits/stdc++.h>

using namespace std;
bool cmp(string a, string b){
	string c = a+b;
	string d = b+a;
	return c>d;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		string a[n];
		for(int i=0; i<n; i++){
			cin >> a[i];
			
		}
		sort(a,a+n,cmp);
		for(int i=0; i<n; i++){
			cout << a[i] ;
		}
		cout << endl;
	}
}
