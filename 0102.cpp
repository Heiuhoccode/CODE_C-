#include<iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		char a;
		cin >> a;
		char b;
		if(a>=65 &&a<=90){
			b=a+32;
		}
		else if(a>=97 && a<=122){
			b=a-32;
		}
		cout << b << endl;
	}
}
