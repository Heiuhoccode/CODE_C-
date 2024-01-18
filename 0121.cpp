#include <iostream>

using namespace std;

long long bcnn(int a, int b){
	for(long long i=1;i<=a;i++){
		if(b*i%a==0){
			return b*i;
		}
	}
}

int main(){
	int n;
	cin >> n;
	while(n--){
		int a,b;
		cin >> a >> b;
		cout << bcnn(a,b) << " " << (long long)a*b/bcnn(a,b) << endl;
	}
}
