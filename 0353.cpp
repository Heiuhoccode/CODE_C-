#include<bits/stdc++.h>

using namespace std;

int result(char a[]){
	for(int i=0; i<strlen(a)/2; i++){
		if(a[i]!=a[strlen(a)-i-1]){
			return 0;
		}
	}
	return 1;
}

void chu_thuong(char a[]){
	for(int i=0; i<strlen(a); i++){
		a[i] = tolower(a[i]);
	}
}

void change(char a[]){
	for(int i=0; i<strlen(a); i++){
		if(a[i]=='a' || a[i]=='b' || a[i]=='c' ){
			a[i] = '2';
		}
		else if(a[i]=='d' || a[i]=='e' || a[i]=='f' ){
			a[i] = '3';
		}
		else if(a[i]=='g' || a[i]=='h' || a[i]=='i' ){
			a[i] = '4';
		}
		else if(a[i]=='j' || a[i]=='k' || a[i]=='l' ){
			a[i] = '5';
		}
		else if(a[i]=='m' || a[i]=='n' || a[i]=='o' ){
			a[i] = '6';
		}
		else if(a[i]=='q' || a[i]=='p' || a[i]=='r' || a[i]=='s' ){
			a[i] = '7';
		}
		else if(a[i]=='t' || a[i]=='u' || a[i]=='v' ){
			a[i] = '8';
		}
		else if(a[i]=='w' || a[i]=='x' || a[i]=='y' || a[i]=='z' ){
			a[i] = '9';
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		char num[1001];
		cin >> num;
		chu_thuong(num);
		change(num);
		if(result(num)==1){
			cout << "YES" << endl;
		}
		else cout << "NO" << endl;
	}
}
