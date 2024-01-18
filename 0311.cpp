#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		char s[1001];
		cin >> s;
		if(strlen(s)==1){
		    cout << 1 << endl;
		}
		else{
    		int max = 0;
    		for(int i=0; i<strlen(s)-1; i++){
    			int cnt = 0;
    			if(s[i]!='0'){
    				for(int j=i+1; j<strlen(s); j++){
    					if(s[i]==s[j] && s[j]!='0'){
    						s[j]='0';
    						cnt++;
    					}
    				}
    				if(cnt > max){
    					max = cnt;
    				}	
    			}
    		}
    		max += 1;
			if(strlen(s)%2==0){
				if(max > strlen(s)/2){
					cout << "0" << endl;
				}
				else{
					cout << "1" << endl;
				}
			}
			else{
				if(max > strlen(s)/2 +1){
					cout << "0" << endl;
				}
				else{
					cout << "1" << endl;
				}
			}
		}
		
	}
}
