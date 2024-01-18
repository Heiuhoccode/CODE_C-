#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		char s[100001];
		cin >> s;
		long long sum = 0;
		char *token = strtok(s,"qwertyuiopasdfghjklzxcvbnm");
		while(token!=NULL){
			char check[100001];
			strcpy(check,token);
			for(int i=0; i<strlen(check); i++){
				sum += (check[i]-'0')*pow(10,strlen(check)-1-i);
			}
			token = strtok(NULL,"qwertyuiopasdfghjklzxcvbnm");
		}
		cout << sum << endl;
	}
}
