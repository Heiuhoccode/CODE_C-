#include<bits/stdc++.h>
using namespace std;

int main(){
	char x[10000];
	char y[10000];
	cin.getline(x,10000);
	cin >> y;
	char *c=strtok(x," ");
	while(c!=NULL){
		if(strcmp(c,y)!=0){
			cout << c << " ";
		}
		c=strtok(NULL," ");
	}
}
