#include<bits/stdc++.h>

using namespace std;

int check_YN(char a[]){
	int check[2][10];
	for(int i=0; i<10; i++){
		check[0][i] = i;
		check[1][i] = 0;
	}
	for(int i=0; i<strlen(a); i++){
		for(int j=0; j<10; j++){
			if((a[i]-'0')==check[0][j]){
				check[1][j]++;
			}
		}
	}
	for(int i=0; i<10; i++){
		if(check[1][i]==0){
			return 0;
		}
	}
	return 2;
}

int check_invalid(char a[]){
	for(int i=0; i<strlen(a); i++){
		if(a[i]<48 || a[i]>57){
			return 0;
		}
	}
	if(strlen(a)<20 || a[0]=='0'){
		return 0;
	}
	return 1;
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		char num[1001];
		cin >> num;
		if(check_invalid(num)==0){
			cout << "INVALID" << endl;
		}
		else if(check_invalid(num)==1 && check_YN(num)==2){
			cout << "YES" << endl;
		}
		else if(check_invalid(num)==1 && check_YN(num)==0){
			cout << "NO" << endl;
		}
	}
}
