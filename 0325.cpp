#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		char s[1001];
		cin >> s;
		int cnt = 0;
		for(int i=0; i<strlen(s); i++){
			cnt = (cnt*10 + (s[i]-'0'))%11;
		}
		if(cnt==0){
			cout << "1\n";
		}
		else cout << "0\n";		
	}
}
