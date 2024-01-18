#include<iostream>
#include<cstring>

using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		char number[20000000];
		cin.getline(number,20000000);
		int sochan = 0;
		int sole = 0;
		char check[200][100000];
		int h = 0;
		char *c = strtok(number," ");
		while(c!=NULL){
			strcpy(check[h],c);
			h++;
			c=strtok(NULL," ");
		}
		for(int i=0; i<h; i++){
			if(check[i][strlen(check[i])-1]%2==0){
				sochan++;
			}
			else{
				sole++;
			}
			cout << check[i][strlen(check[i])-1] << endl;
		}
		if((sochan>sole&&h%2==0)||(sochan<sole&&h%2!=0)){
			cout << "YES" << endl;
		}
		else cout <<"NO" << endl;		
	}
}
