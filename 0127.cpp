#include<iostream>
#include <cmath>

using namespace std;

int snt (int a){
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
	int n;
	cin >> n;
	while(n--){
		int a;
		cin >> a;
		if(a==2||a==3){
			cout << -1 << endl;
		}
		else{
			for(int i=2;i<=a;i++){
				if(snt(i)==1&&snt(a-i)==1){
					cout << i <<" "<< a-i ;
					break;
				}
				else if(i>a/2){
					cout << -1 ;
					break;
				}
			}
			cout << endl;
		}
	}
}
