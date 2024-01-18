#include<bits/stdc++.h>

using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		long long sum=0;
		for(int i=1; i<=sqrt(n);i++){
			if(n%i==0 && i!=n/i){
				sum += i+n/i;
			}
			else if(n%i==0 && i==n/i){
				sum += i;
			}
		}
		cout << sum << endl;
	}
}
