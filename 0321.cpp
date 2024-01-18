#include<bits/stdc++.h>

using namespace std;

void result(char a[], char b[]){
	int du = 0;
	for(int i=strlen(a)-1; i>=0; i--){
		b[i] += du;
		if(a[i] < b[i]){
			a[i] = (a[i] + 10) - b[i] + 48; 
			du = 1;
		}
		else{
			a[i] = a[i] - b[i] + 48;
			du = 0;
		}
	}
}

void change(char a[], char b[]){
	int h = strlen(a) - strlen(b);
	char c[strlen(a)];
	for(int i=0; i<strlen(a); i++){
		if(i<h){
			c[i] = '0';
		}
		else c[i] = b[i-h];
	}
	strcpy(b,c);
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
		char a[1001], b[1001];
		cin >> a >> b;
		khu_0(a);
		khu_0(b);
		if(strlen(a) > strlen(b)){
			change(a,b);
			result(a,b);
			cout << a << endl;
		}
		else if(strlen(a) < strlen(b)){
			change(b,a);
			result(b,a);
			cout << b << endl;
		}
		else{
			int cnt;
			for(int i=0; i<strlen(a); i++){
				if(a[i]!=b[i]){
					cnt = a[i]-b[i];
					break;
				}
			}
			if(cnt>0){
				result(a,b);
				cout << a << endl;
			}
			else{
				result(b,a);
				cout << b << endl;
			}
		}
	}
}
