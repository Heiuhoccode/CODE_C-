#include<bits/stdc++.h>

using namespace std;

int check(char email[]){
	for(int i=0; i<strlen(email); i++){
		if(email[i]<46 || email[i]==47 || (email[i]>=58&&email[i]<=64) ||(email[i]>=91&&email[i]<=94) ||email[i]==96 || email[i]>122){
			return 0;
		}
	}
	int cnt  = 0;
	int vitri;
	for(int i=0; i<strlen(email); i++){
		if(email[i]=='@'){
			cnt++;
			vitri = i;
		}
	}
	if(cnt>1 || cnt==0){
		return 0;
	}
	if(strlen(email)-vitri-1>254 || vitri > 64){
		return 0;
	}
	int cnt1=0;
	int vitri1;
	for(int i=0; i<strlen(email); i++){
		if(email[i]=='.'){
			cnt1++;
			vitri1 = i;
			break;
		}
	}
	if(cnt1==0){
		return 0;
	}
}

int main(){
	int n;
	cin >> n;
	while(n--){
		cin.ignore();
		char email[1001];
		cin.getline(email,1001);
		if(check(email)==0){
			cout << "NO" << endl;
		}
		else cout << "YES" << endl;
	}
}
