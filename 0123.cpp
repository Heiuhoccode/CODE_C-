#include <iostream>
#include <cmath>
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

int main(){
	int a;
	cin >> a;
	if(snt(a)==1){
		cout << "YES";
	}
	else cout << "NO";
}
