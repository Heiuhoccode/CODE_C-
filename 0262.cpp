#include <bits/stdc++.h>

using namespace std;

long long ntcn(long long a, long long b){
	if(a==0 || b==0){
		return a+b;
	}
	while(a!=b){
		if(a>b){
			a -= b;
		}
		else b -= a;
	}
	return a;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n,m;
		cin >> n >> m;
		long long sum = 0;
		for(long long i=1; i<=n; i++){
			sum += i;
		}
		if((sum+m)%2!=0){
			cout << "No" << endl;
		}
		else{
			long long s1 = (sum+m)/2;
			long long s2 = (sum-m)/2;
			if(ntcn(s1,s2)==1){
				cout << "Yes" << endl;
			}
			else cout << "No" << endl;
		}		
	}

}
