#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int n;
	cin >> n;
	while(n--){
		int a;
		cin >> a;
		int i=2;
		int dem =0;
		while(a>1){
			if(a%i==0){
				dem++;
				a/=i;
				if(a%i!=0){
					cout << i << " " << dem << " ";
				}
			}
			else{
				i++;
				dem = 0;
			}
		}
		cout << endl;
	}
}

