#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	char baitho[n][10000];
	cin.ignore();
	for(int i=0; i<n ;i++){
		
		cin.getline(baitho[i],10000);
	}
	int check[n];
	for(int i=0; i<n ;i++){
		int sotu = 0;
		char *token = strtok(baitho[i]," ");
		while(token!=NULL){
			sotu++;
			token = strtok(NULL, " ");
		}
		check[i] = sotu;
	}
	for(int i=0; i<n; i++){
		if(check[i]==6 || check[i]==8){
			check[i]=1;
		}
		if(check[i]==7){
			check[i]=2;
		}
	}	
	int sobai=0;
	for(int i=0; i<=n-4; i++){
		bool tntt = true;
		for(int j=i;j<i+4;j++){
			if(check[j]!=2){
				tntt = false;
			}
		}
		if(tntt){
			sobai++;
		}
	}
	for(int i=1; i<n; i++){
		if(check[i-1]!=check[i]&&check[i-1]==1&&check[i]==2){
			sobai++;
		}
	}
	if(check[n-1]==1){
		sobai++;
	}
	cout << sobai << endl;
	for(int i=0; i<n; i++){
		if(check[i-1]!=check[i]&&check[i-1]==1&&check[i]==2){
			cout << 1 << endl;
		}
		bool tntt = true;
		for(int j=i;j<i+4;j++){
			if(check[j]!=2){
				tntt = false;
			}
		}
		if(tntt){
			cout << 2<< endl;
		}
		
	}
	if(check[n-1]==1){
		cout << 1<<endl;
	}
}
