#include <iostream>
#include <cstring>

using namespace std;

int main(){
	int n;
	cin >> n;
	while(n--){
		char so[10];
		cin >> so;
		if(so[strlen(so)-1]==54&&so[strlen(so)-2]==56){
			cout << 1 << endl;
		}
		else cout << 0 << endl;
	}
}
