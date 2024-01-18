#include<bits/stdc++.h>

using namespace std;

int snt(int a){
	if(a<=1){
		return 0;
	}
	for(int i=2;i<=sqrt(a);i++){
		if(a%i==0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		long long int L,R;
		cin >> L >> R;
		int cot = 0;
		for(int i=sqrt(L); i<=sqrt(R); i++){
			if(snt(i)==1){
				cot++;
			}
		}
		cout << cot << endl;
	}
}
