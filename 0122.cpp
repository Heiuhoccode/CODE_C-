#include <iostream>

using namespace std;

long long bcnn (long long a,int b){
	for(int i=1;i<=b;i++){
		if(a*i%b==0){
			return a*i;
		}
	}
}
int main(){
	int n;
	cin >> n;
	while(n--){
		int a;
		cin >> a;
		long long h=1;
		for(int i=2;i<=a;i++){
			h = bcnn(h,i);
		}
		cout << h << endl;
	}
}
