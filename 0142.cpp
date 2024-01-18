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

int ntcn(int k,int x){
	int c=2;
	while(c>1){
		c = abs(x-k);
		x = k;
		k = c;
		if(c==1){
			return 1;
		}
	}
}

int main(){
	int n;
	cin >> n;
	while(n--){
		int x;
		cin >> x;
		int dem = 0;
		for(int i=1;i<=x;i++){
			if(ntcn(i,x)==1){
				dem++;
			}
		}
		if(snt(dem)==1){
			cout << 1 << endl;
		}
		else cout << 0 << endl;
	}
}
