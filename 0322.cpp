#include<bits/stdc++.h>

using namespace std;

void result(char a[], char b[]){
	int du = 0;
	for(int i=strlen(a)-1; i>=0; i--){
		b[i] += du;
		if((a[i]+b[i]-48)>57){
			a[i] = a[i] + b[i] - 58;
			du = 1;
		}
		else{
			a[i] = a[i] + b[i] - 48;
			du = 0;
		}
	}
}

void change(char a[], char b[]){
	int h = strlen(a) - strlen(b);
	char d[10001];char c[10001];
	for(int i=1;i<=strlen(a);i++){
		c[i] = a[i-1]; 
	}
	c[0] = 48;
	strcpy(a,c);
    for(int i=0; i<strlen(a); i++){
		if(i<=h){
			d[i] = 48;
		}
		else{
			d[i] = b[i-h-1];
		}
	}
	strcpy(b,d);
	
	
}

void khu_0(char a[]){
	int index;
	for(int i=0; i<strlen(a); i++){
		if(a[i]!='0'){
			index = i;
			break;
		}
	}
	for(int i=index; i<strlen(a); i++){
		a[i-index] = a[i];
	}
	a[strlen(a)-index] = 0;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		char a[10001], b[10001];
		cin >> a >> b;
		khu_0(a);
		khu_0(b);
		if(strlen(a) > strlen(b)){
			change(a,b);
		}
		else{
			change(b,a);
		}
		result(a,b);
		khu_0(a);
		cout << a << endl;
	}
}
