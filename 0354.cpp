#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		char apb[101];
		cin >> apb;
		for(int i=0; i<strlen(apb); i++){
			int dem = 0;
			if(apb[i]!='0'){
				cout << apb[i];
				for(int j=i+1; j<strlen(apb); j++){
					if(apb[j]!='0' && apb[j]==apb[i]){
						dem++;
						apb[j] = '0';
					}
				}
				cout << dem+1;		
			}
		}
		cout << endl;	
	}

}
