#include<iostream>
#include<cmath>

using namespace std;

long long tang ( long long a){
	int h=10;
	bool tangdan = true;
	while(a>0){
		int k=a%10;
		if(k>=h){
			tangdan = false;
		}
		h=k;
		a/=10;
	}
	if(tangdan){
		return 1;
	}
}

long long giam ( long long a){
	int h=-1;
	bool giamdan = true;
	while(a>0){
		int k=a%10;
		if(k<=h){
			giamdan = false;
		}
		h=k;
		a/=10;
	}
	if(giamdan){
		return 1;
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long h = pow(10,n);
		int snt[h-1];
		for(long long i=2;i<pow(10,n);i++){
			snt[i]=1;
		}
		for(int i=2;i<pow(10,n);i++){
			for(long long j=i*2;j<pow(10,n);j+=i){
				snt[j]=0;
			}
		}
		int dem = 0;
		for(long long i=pow(10,n-1);i<pow(10,n);i++){
			if((tang(i)==1||giam(i)==1)&&snt[i]==1){
				dem++;
			}
		}
		cout << dem << endl;	
	}
}
