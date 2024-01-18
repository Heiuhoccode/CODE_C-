#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	char a[n][1000];
	cin.ignore();
	for(int i=0;i<n;i++){
		
		cin.getline(a[i],1000);
	}
	char b[n][1000];
	int c[2][n];
	for(int i=0; i<n; i++){
		c[0][i]= i+1;
		c[1][i]=0;
	}
	for(int i=0; i<n; i++){
		char check[5][1000];
		int h = 0;
		char *token = strtok(a[i]," ");
		while(token!=NULL){
			strcpy(check[h],token);
			h++;
			token=strtok(NULL," ");
		}
		strcpy(b[i],check[4]);
		if(strcmp(check[3],"IN")==0){
			if(strcmp(check[1],"Xe_con")==0 && strcmp(check[2],"5")==0){
				c[1][i] += 10000;
			}
			if(strcmp(check[1],"Xe_con")==0 && strcmp(check[2],"7")==0){
				c[1][i] += 15000;
			}
			if(strcmp(check[1],"Xe_tai")==0 && strcmp(check[2],"2")==0){
				c[1][i] += 20000;
			}
			if(strcmp(check[1], "Xe_khach")==0 && strcmp(check[2],"29")==0){
				c[1][i] += 50000;
			}
			if(strcmp(check[1],"Xe_khach")==0 && strcmp(check[2],"45")==0){
				c[1][i] += 70000;
			}
		}
	}
	for(int i=0; i<n-1; i++){
		if(strcmp(b[i],"0")!=0){
			long long sum = c[1][i];
			cout << b[i] <<": ";
			for(int j=i+1;j<n;j++){
				if(strcmp(b[i],b[j])==0 && strcmp(b[j],"0")!=0 ){
					sum+=c[1][j];
					strcpy(b[j],"0");
				}
			}
			cout << sum<< endl;
		}
	}
}
