#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		char s[1001];
		cin.ignore();
		fgets(s,sizeof(s)+1,stdin);
		int dem = 0;
		for(int i=strlen(s)-1; i>=0; i--){
			if(s[i]==' '||s[i]=='\n'||s[i]=='\t'){
				s[i]='0';
			}
			else break;
		}
		for(int i=0; i<strlen(s); i++){
			if(s[i]==' '||s[i]=='\n'||s[i]=='\t'){
				s[i]='0';
			}
			else break;
		}		
		for(int i=0; i<strlen(s); i++){
			if(s[i]=='0') continue;
			else if((s[i]==' '||s[i]=='\t') && s[i+1]!=' '){
				dem++;
			}
		}
		cout << dem+1 << endl;		
	}

}
