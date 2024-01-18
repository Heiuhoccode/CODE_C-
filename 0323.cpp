#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		char N[1001];
		long long M;
		cin >> N >> M;
		long long cnt = 0;
		for(int i=0; i<strlen(N); i++){
			cnt = (cnt*10 + (N[i]-48))%M;
		}
		cout << cnt << endl;
	}
}
