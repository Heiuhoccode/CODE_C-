#include <bits/stdc++.h>

using namespace std;

int snt(int a){
	if(a==0||a==1){
		return 0;
	}
	for(int i=2;i<=sqrt(a);i++){
		if(a%i==0){
			return 0;
		}
	}
	return 1;
}

void usntnn(int a){
	if(snt(a)==1){
		cout << a <<" ";
	}
	else{
		for(int i=2;i<=sqrt(a);i++){
			if(a%i==0){
				cout << i << " ";
				break;
			}
		}	
	}
}

int main(){
	int n;
	cin >> n;
	while(n--){
		int a;
		cin >> a;
		cout << 1 << " ";
		for(int i=2;i<=a;i++){
			
			usntnn(i);
		}
		cout << endl;
	}
}

