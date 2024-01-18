#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		char S[10000];
		cin >> S;
		for(int i=0; i<strlen(S)-1; i++){
			if(S[i]!='0'){
				int c = 0;
				for(int j=i+1; j<strlen(S); j++){
					if(S[i]==S[j] && S[j]!='0'){
						S[j]='0';
						c++;
					}
				}
				if(c>0){
					S[i]='0';
				}	
			}
		}
		for(int i=0; i<strlen(S); i++){
			if(S[i]!='0'){
				cout << S[i];
			}
		}
		cout << endl;
	}
}
