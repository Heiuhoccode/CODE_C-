#include <bits/stdc++.h>

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
		int L,R;
		cin >> L >> R;
		int dem =0;
		for(int i=L; i<=R; i++){
			if(snt(i)==1){
				dem++;
			}
		}
		cout << dem << endl;
	}
}
