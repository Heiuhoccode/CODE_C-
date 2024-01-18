#include <iostream>
#include <cmath>

using namespace std;

int snt(long long int a){
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

int scp( long long int a){
	int h = (int)sqrt(a);
	if(h*h==a && snt(h)==1){
		return 1;
	}
}

int main(){
	int n;
	cin >> n;
	while(n--){
		long long int a;
		cin >> a;
		int dem = 0;
		for(long long int i=4;i<=a;i++){
			if(scp(i)==1){
				dem++;
			}
		}
		cout << dem << endl;
	}
}
