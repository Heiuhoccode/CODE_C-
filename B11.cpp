#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		char a[100];
		cin.getline(a,100);
		char sdt[12];
		int h= 0;
		for(int i=strlen(a)-1; i>=0; i--){
			if(a[i]<=57 && a[i]>=48 && h<9){
				sdt[h] = a[i];
				h++;	
			}
			else if(h>=9){
				break;
			}
		}
		cout << "0";
		for(int i=h-1; i>=0; i--){
			cout << sdt[i];
		}
		cout << endl;
	}
}
