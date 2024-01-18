#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		getchar();
		char a[10];
		cin >> a;
		int dem=0;
		for(int i=0;i<strlen(a);i++){
			if(a[i]!='0' && a[i]!='6' && a[i]!='8' ){
				dem++;
			}
		}
		if(dem == 0){
			cout << "YES" << endl;
		}
		else cout << "NO" << endl;
	}
}
