#include <bits/stdc++.h>

using namespace std;

int snt(int a){
	if(a==1||a==0){
		return 0;
	}
	for(int i=2;i<=sqrt(a);i++){
		if(a%i==0){
			return 0;
		}
	}
	return 1;
}

int usnt(int b,int k){
	int dem = 0;
	int a=b;
	if(snt(b)==1&&k==1){
		return b;
	}
	else if(snt(b)==1&&k!=1){
		return -1;
	}
	else if(snt(b)!=1){
		for(int i=2;i<=b;i++){
			while(a%i==0){
				dem++;
				if(dem==k){
					return i;
				}
				a/=i;
			}
		}
		if(dem<k){
			return -1;
		}		
	}
}

int main(){
	int n;
	cin >> n;
	while(n--){
		int a,k;
		cin >> a >> k;
		cout << usnt(a,k) << endl;
	}
}
