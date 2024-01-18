#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		char s[1001];
		cin >> s;
		int sum = 0;
		for(int i=0; i<strlen(s)-1; i++){
			int dem = 0;
			if(s[i]!='0'){
				for(int j=i+1; j<strlen(s); j++){
					if(s[j]!='0' && s[i]==s[j]){
						dem++;
						s[j]='0';
					}
				}
			}
			sum += (dem+1)*dem/2;
		}
		cout << sum + strlen(s) << endl;		
	}

}
