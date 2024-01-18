#include <iostream>
#include <cmath>

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

int scp( int a){
	int h = (int)sqrt(a);
	if(h*h==a && snt(h)==1){
		return 1;
	}
	else return 0;
}

int main(){
	int n;
	cin >> n;
	while(n--){
		int a;
		cin >> a;
		for(int i=2;i<=a;i++){
			if(scp(i)==1){
				cout << i << " ";
			}
		}
		cout << endl;
	}
}
