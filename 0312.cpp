#include<bits/stdc++.h>

using namespace std;


int main(){
	int t;
	cin >> t;
	while(t--){
		char s[1000001];
		int k;
		cin >> s >> k;
		for(int i=0; i<strlen(s)-1; i++){
			for(int j=i+1; j<strlen(s); j++){
				if(s[i]>s[j]){
					char temp = s[j];
					s[j] = s[i];
					s[i] = temp;
				}
			}
		}
		int cnt = 0;
		for(int i=1; i<strlen(s); i++){
			if(s[i]!=s[i-1]){
				cnt++;
			}
		}
		if(strlen(s)>=26 && 25-cnt <= k){
			cout << 1 << endl;
		}
		else cout << 0 << endl;
	}
}
