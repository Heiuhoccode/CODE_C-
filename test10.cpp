#include<iostream>
#include<cstring>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		cin.ignore();
		char number[2000000];
		cin.getline(number,2000000);
		cout << number;		
	}
}
