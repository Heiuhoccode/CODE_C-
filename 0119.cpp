#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	while(n--){
		int a;
		cin >> a;
		if(a%2!=0){
			cout << 0;
		}
		else{
			int dem = 0;
			int h= sqrt(a);
			for(int i=2;i<=h;i++){
				if(a%i==0&&i%2==0){
					dem++;
				}
				if(a%i==0&&(a/i)%2==0){
					dem++;
				}
			}
			if(h*h==a){
				cout << dem;
			}
			else cout << dem+1;
			
		}
		cout << endl;
	}
}
