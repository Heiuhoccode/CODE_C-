#include<bits/stdc++.h>

using namespace std;

void name_midname(char *a){
	for(int i=1; i<strlen(a); i++){
		a[i] = tolower(a[i]);
	}
	a[0] = toupper(a[0]);
}
void surname(char *a){
	for(int i=0; i<strlen(a); i++){
		a[i] = toupper(a[i]);
	}
}

int main(){
	char name[1000];
	cin.getline(name,1000);
	char check[1000][1000];
	int h = 0;
	char *c = strtok(name," ");
	while(c!=NULL){
		strcpy(check[h],c);
		h++;
		c = strtok(NULL, " ");
	}
	surname(check[h-1]);
	for(int i=0; i<h-1; i++){
		name_midname(check[i]);
	}
	for(int i=0; i<h-1; i++){
		if(i==h-2){
			cout << check[i];
		}
		else cout << check[i] << " ";
	}
	cout << ", " << check[h-1];
}
