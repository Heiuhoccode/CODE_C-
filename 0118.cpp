#include <bits/stdc++.h>

using namespace std;

int snt(int a){
	if(a==0||a==1){
		return 0;
	}
	for(int i=2;i<=sqrt(a);i++){
		if(a%i==0){
			return 0;
		}
	}
	return 1;
}

void sphenic(int a){
	int dem = 0;
	int dem1 = 0;
	int b=a;
	for(int i=2;i<=sqrt(b);i++){
		int cnt =0;
		while(a%i==0){
			dem++;
			cnt++;
			a/=i;
			if(a>sqrt(b)&&snt(a)==1){
				dem++;
				dem1++;
			}
		}
		if(cnt>0){
			dem1++;
		}
	}
//	cout << endl << dem << " " << dem1 << endl;
	if(dem==3&&dem1==3){
		cout << 1;
	}
	else cout << 0;
}


int main(){
	int n;
	cin >> n;
	while(n--){
		int a;
		cin >> a;
		if(snt(a)==1){
			cout << 0 << endl;
		}
		else{
			sphenic(a);
			cout << endl;
		}
	}
}
