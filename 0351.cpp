#include<bits/stdc++.h>

using namespace std;

void change(char a[]){
	for(int i=0; i<strlen(a); i++){
		if(i==0 && a[i]!=' '){
			a[i] = toupper(a[i]);
		}
		else if(a[i-1]==' ' && a[i]!=' '){
			a[i] = toupper(a[i]);
		}
		else{
			a[i] = tolower(a[i]);
		}
	}
}

void loai_1(char a[]){
	char check[61][61];
	int h = 0;
	char *token = strtok(a, " ");
	while(token!=NULL){
		strcpy(check[h],token);
		h++;
		token = strtok(NULL, " ");
	}
	cout << check[h-1] << " ";
	for(int i=0; i<h-2; i++){
		cout << check[i] << " ";
	}
	cout << check[h-2] << endl;
}

void loai_2(char a[]){
	char check1[61][61];
	int h1 = 0;
	char *token1 = strtok(a, " ");
	while(token1!=NULL){
		strcpy(check1[h1],token1);
		h1++;
		token1= strtok(NULL, " ");
	}
	for(int i=1; i<h1; i++){
		cout << check1[i] << " ";
	}
	cout << check1[0] << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int k;
		char name[61];
		cin >> k;
		cin.ignore();
		cin.getline(name, 61);
		change(name);
		if(k==1){
			loai_1(name);
		}
		else if(k==2){
			loai_2(name);
		}
	}
}
