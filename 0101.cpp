#include<iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		long long sum;
		long long int n;
		cin >> n;
		sum = (n+1)*n/2;
		cout << sum << endl;
	}
}
