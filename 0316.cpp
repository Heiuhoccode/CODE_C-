#include<bits/stdc++.h>

using namespace std;

int tong2(int a){
	int sum = 0;
	while(a>0){
		int h = a%10;
		sum += h;
		a/=10;
	}
	return sum;
}

int tong(char a[]){
	int sum = 0;
	for(int i=0; i<strlen(a); i++){
		sum += (a[i]-'0');
	}
	return sum;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		char a[102];
		cin >> a;
		int sum = tong(a);
		int sum2 = tong2(sum);
		while(sum2>9){
			sum2 = tong2(sum2);
		}
		if(sum == 9 || sum2 == 9){
			cout << 1 << endl;
		}
		else cout << 0 << endl;		
	}

}
