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
			cnt = (cnt*2 + (s[i]-'0'))%5;
		}
		if(cnt==0){
			cout << "Yes\n";
		}
		else cout << "No\n";		
	}
}
