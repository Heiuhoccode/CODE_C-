#include <bits/stdc++.h>

using namespace std;

int snt(long long a){
	if(a==1){
		return 0;
	}
	for(long long i=2;i<=sqrt(a);i++){
		if(a%i==0){
			return 0;
		}
	}
	return 1;
}

void shh(long long a){
	long long p =0;
	long long shh = 0;
	do{
		if(snt(p)==1){
			shh = pow(2,p-1) * (pow(2,p) - 1);
			p++;	
		}
		else p++;
	}while(a>shh);
	// while(a > shh){
	// 	if(snt(p)==0){
	// 		p++;	
	// 	}
	// 	else{
	// 		long long b = pow(2,p-1);
	// 		long long c = pow(2,p)-1;
	// 		shh = b*c;	
	// 		if(a > shh){
	// 			p++;
	// 		}
	// 	}
	// }
	if(a == shh) cout << 1 << endl;
	else cout << 0 << endl;
}

int main(){
	int n;
	cin >> n;
	while(n--){
		long long a; cin >> a;
		shh(a);
	}
}
