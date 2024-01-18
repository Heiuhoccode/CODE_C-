#include <iostream>
#include <cmath>

using namespace std;

int cong( int a){
	int h=a;
	while(h>0){
		int tong=0;
		while(h>0){
			int b= h%10;
			tong += b;
			h/=10;		
		}
		h = tong;
		if(h/10==0&&h<10){
			break;
		}
	}
	return h;
}


int main(){
	int n;
	cin >> n;
	while(n--){
		int t;
		cin >> t;
		cout << cong(t) << endl;
	}
}
