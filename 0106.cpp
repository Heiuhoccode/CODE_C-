#include <iostream>
#include <stdbool.h>
#include <cstring>
using namespace std;

int main(){
	int test;
	cin >> test;
	while(test--){
		getchar();
		char stn[19];
		cin >> stn;
		bool bangnhau = true;
		for(int i=0;i<strlen(stn)/2;i++){
			if(stn[i] != stn[strlen(stn)-i-1]){
				bangnhau = false;
			}
		}
		if(bangnhau){
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
}
