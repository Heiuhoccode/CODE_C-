#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
	int n;
	cin >> n;
	double sum = 0;
	for(int i=1;i<=n;i++){
		sum += (float)1/i;
	}
	cout <<fixed  << setprecision(4)<< sum;
	
}
