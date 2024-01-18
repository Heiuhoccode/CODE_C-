#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	char a[n][50];
	cin.ignore();
	for(int i=0; i<n; i++){
		cin.getline(a[i],50);
	}
	for(int i=0; i<n-1; i++){
		if(strcmp(a[i],"0")!=0){
			for(int j=i+1; j<n; j++){
				if(strcmp(a[i],a[j])==0 && strcmp(a[j],"0")!=0){
					strcpy(a[j],"0");
				}
			}
		}
	}
	int dem = 0;
	for(int i=0; i<n; i++){
		if(strcmp(a[i],"0")==0) continue;
		dem++;
	}
	cout << dem ;
}
