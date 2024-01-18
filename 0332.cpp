#include<bits/stdc++.h>

using namespace std;

int main(){
	char name[1000];
	cin.getline(name,1000);
	for(int i=0; i<strlen(name); i++){
		name[i] = tolower(name[i]);
	}
	char check[1000][1000];
	int h=0;
	char *c = strtok(name," ");
	while(c!=NULL){
		strcpy(check[h],c);
		h++;
		c = strtok(NULL, " ");
	}
	cout << check[h-1];
	for(int i=0; i<h-1; i++){
		cout << check[i][0];
	}
	cout << "@ptit.edu.vn";
}
