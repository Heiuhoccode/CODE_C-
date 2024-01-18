#include <iostream>
#include <cstring>
#include <stdbool.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	while(n--){
		char so[19];
		cin >> so;
		bool solienke = true;
		for(int i=1;i<strlen(so);i++){
			if(abs(so[i-1]-so[i])!=1){
				solienke = false;
			}
		}
		if(solienke){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
}
