#include<bits/stdc++.h>

using namespace std;

int giam(char a[],int h){
	for(int i=0; i<h-1; i++){
		if(a[i]<=a[i+1]){
			return 0;
		}
	}
	return 1;
}

int bang(char a[], int h){
	for(int i=1; i<h; i++){
		if(a[i-1]!=a[i]){
			return 0;
		}
	}
	return 2;
}

int bang3_2(char a[],int h){
	for(int i=3; i<5; i++){
		if(a[i-1]!=a[i]){
			return 0;
		}
	}
	if(a[0]!=a[1]){
		return 0;
	}
	return 3;
}

int so6_8(char a[],int h){
	for(int i=0; i<h; i++){
		if(a[i]!='6' && a[i]!='8'){
			return 0;
		}
	}
	return 4;
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string a;
		getline(cin, a);
		char num[6];
		int h = 0;
		for(int i=a.size()-1; i>=5; i--){
			if(a[i]=='.'){
				continue;
			}
			num[h] = a[i];
			h++;
		}
	
		if(giam(num,h)==1||bang(num,h)==2||bang3_2(num,h)==3||so6_8(num,h)==4){
			cout << "YES" << endl;
		}
		else cout <<"NO" << endl;
	}
}
