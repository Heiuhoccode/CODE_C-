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

int main(){
	int a;
	cin >> a;
	int b=a;
	if(snt(a)==1){
		cout << a << " " << 1;
	}
	else {
		for(int i=2;i<=sqrt(b);i++){
			int dem = 0;
			while(a%i==0){
				dem++;
				a/=i;
			}
			if(dem>0){
				cout << i << " " << dem << endl;
			}
			else if(snt(a)==1){
				cout << a << " " << 1 << endl;
				break;
			}
		}		
	}

}
