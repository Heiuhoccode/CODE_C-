#include <iostream>
#include <cstring>

using namespace std;

int main(){
	int n;
	cin >> n;
	while(n--){
		getchar();
		char code[19];
		cin >> code;
		char check[4] = "084";
		int check1[19];
		for(int i=0;i<19;i++){
			check1[i] = 0;
		}
		for(int i=0;i<strlen(code);i++){
			for(int j=0;j<4;j++){
				if(code[i]==check[j]){
					check1[i]=1;
					i++;
				}
				else{
					break;
				}
			}
		}
//		for(int i=0;i<strlen(code);i++){
//			cout << check1[i] << " ";
//		}
		for(int i=0;i<strlen(code);i++){
			if((check1[i-1]==1&&check1[i]==1&&check1[i-2]==1)||(check1[i+1]==1&&check1[i]==1&&check1[i+2]==1)||(check1[i-1]==1&&check1[i]==1&&check1[i+1]==1)){
				continue;
			}
			else cout << code[i] ;
		}
		cout << endl;
	}
}
