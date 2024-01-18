#include<bits/stdc++.h>

using namespace std;

int xet(char so[], char check[], int h){
	for(int i=0 ;i<h; i++){
		if(check[i]-17 != so[i] && check[i]-27 != so[i]){
			return 0;
		}
	}
	return 1;
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		char so[7];
		char mahoa[100];
		cin >> so >> mahoa;
		char check[7];
		int h = 0;
		for(int i=0 ;i<strlen(mahoa); i++){
			if(mahoa[i]>=65 && mahoa[i] <=90){
				check[h]=mahoa[i];
				h++;
			}
		}
		if(strlen(so)!=h){
			cout <<"NO" << endl;
		}
		else{
			if(xet(so,check,h)==1){
				cout << "YES" << endl;
			}
			else cout << "NO" << endl;
		}
	}
}
