#include<bits/stdc++.h>

using namespace std;

int chuyendoi(char a[]){
	int sum = 0;
	for(int i=0; i<strlen(a); i++){
		sum += (a[i]-'0')*pow(10,strlen(a)-1-i);
	}
	return sum;
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		char ip[1001];
		cin.getline(ip, 1001);
		char check[4][1001];
		int h = 0;
		char *token = strtok(ip, ".");
		while(token!=NULL){
			strcpy(check[h], token);
			h++;
			token = strtok(NULL,".");
		}
		bool chuan_ip=true;
		for(int i=0; i<h; i++){
			if(strlen(check[i])>3){
				chuan_ip = false;
			}
			else if(strlen(check[i])==3){
				if(strcmp("255",check[i])<0){
					chuan_ip = false;
				}
			}
			else if(strlen(check[i])==2){
				if(chuyendoi(check[i])<0){
					chuan_ip = false;
				}
			}
		}
		if(chuan_ip){
			cout << "YES";
		}
		else cout << "NO";
		cout << endl;
	}
}
