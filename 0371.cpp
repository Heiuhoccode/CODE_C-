#include<bits/stdc++.h>

using namespace std;

int main(){
	char name[101];
	cin >> name;
	for(int i=0; i<strlen(name); i++){
		name[i] = tolower(name[i]);
	}
	for(int i=0; i<strlen(name); i++){
		if(name[i]!='a'&&name[i]!='e'&&name[i]!='i'&&name[i]!='o'&&name[i]!='u'&&name[i]!='y'){
			cout << "." << name[i];
		}
	}	
}
