#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		char s1[201], s2[201];
		cin.getline(s1,201);
		cin.getline(s2,201);
		char check1[201][201];
		char check2[201][201];
		int h=0;
		char *c=strtok(s1," ");
		while(c!=NULL){
			strcpy(check1[h],c);
			h++;
			c=strtok(NULL," ");
		}
		int k =0;
		char *d=strtok(s2," ");
		while(d!=NULL){
			strcpy(check2[k],d);
			k++;
			d=strtok(NULL," ");
		}
		for(int i=0; i<h; i++){
			if(strcmp(check1[i],"0")!=0){
				for(int j=0; j<k; j++){
					if(strcmp(check1[i],check2[j])==0){
						strcpy(check1[i],"0");
					}
				}	
			}
		}
		for(int i=0; i<h-1; i++){
			if(strcmp(check1[i],"0")!=0){
				for(int j=i+1; j<h; j++){
					if(strcmp(check1[i],check1[j])==0){
						strcpy(check1[i],"0");
					}
				}	
			}
		}
		
		char temp[201];
		for(int i=0; i<h-1; i++){
			for(int j=i+1; j<h; j++){
				if(strcmp(check1[i],check1[j])>0){
					strcpy(temp,check1[i]);
					strcpy(check1[i],check1[j]);
					strcpy(check1[j],temp);
				}
			}
		}
		
		for(int i=0; i<h; i++){
			if(strcmp(check1[i],"0")!=0){
				cout << check1[i] << " ";
			}
		}
		cout << endl;
	}
}
