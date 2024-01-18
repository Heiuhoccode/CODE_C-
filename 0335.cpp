#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		char s[100001];
		cin >> s;
		long long max = 0;
		char *token = strtok(s,"qwertyuiopasdfghjklzxcvbnm");
		while(token!=NULL){
			char check[100001];
			strcpy(check,token);
			long long h=0;
			for(int i=0; i<strlen(check); i++){
				h += (check[i]-'0')*pow(10,strlen(check)-1-i);
			}
			if(max < h){
				max = h;
			}
			token = strtok(NULL,"qwertyuiopasdfghjklzxcvbnm");
		}
		cout << max << endl;
	}
}
