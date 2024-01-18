#include <iostream>
#include <cmath>

using namespace std;
int xd = 0;
void cbcl( int a, int n){
	int dem = 0;
	int b=a;
	while(a>0){
		int h=a%10;
		if(h%2==0){
			dem++;
		}
		a/=10;
	}
	
	if(dem==n/2){
		xd++;
		if(xd%10==0){
			cout << b << endl;
		}
		else cout << b << " ";
	}
}

int main(){
	int n;
	cin >> n;
	for(int i=pow(10,n-1);i<pow(10,n);i++){
		cbcl(i,n);
	}
}
