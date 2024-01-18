#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

int main(){
	char de1[17]="ABBADCCABDCCABD";
	char de2[17]="ACCABCDDBBCDDBB";
	int test;
	cin >> test;
	while(test--){
		int de;
		char baithi[29];
		cin >> de ;
		for(int i=0;i<15;i++){
			cin >> baithi[i];
		}
		float sum =0;
		if(de == 101){
			for(int i=0;i<15;i++){
				if(baithi[i]==de1[i]){
					sum ++;
				}
			
			}
			cout << fixed << setprecision(2) << sum*10/15 << endl;
		}
		if(de == 102){
			for(int i=0;i<15;i++){
				if(baithi[i]==de2[i]){
					sum ++;
				}
			}
			cout << fixed << setprecision(2) << sum*10/15 << endl;
		}
	}
}
