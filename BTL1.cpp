#include<bits/stdc++.h>

using namespace std;
int snt(int a){
	if(a<2){
		return 0;
	}
	for(int i=2; i<=sqrt(a); i++){
		if(a%i==0){
			return 0;
		}
	}
	return 1;
}

int duongcheo(int a[5][5],int S){
	int DCC = 0;
	int DCP = 0;
	int dc = 0;
	int dp = 0;
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			if(i==j){
				DCC += a[i][j]*pow(10,5-i-1);
				dc += a[i][j];
			}
		}
	}
	if(snt(DCC)==1 && dc==S){
		return 1;
	}
	return 0;
}



int tong(int a){
	int sum = 0;
	while(a>0){
		int h = a%10;
		sum += h;
		a/=10;
	}
	return sum;
}


int main(){
		
	int S;
	
	cin >> S;
	int index = 0;
	int b[89999][5];
	for(int i=10001; i<=99999; i++){
		if(snt(i)==1 && tong(i) == S){
			int k=4;
			int a = i;
			while(a>0){
				int h = a%10;
				b[index][k] = h;
				k--;
				a/=10;
			}
			index++;
		}
	}
	int t;
	cin >> t;
	while(t--){
		int a[5];
		for(int i=0; i<5; i++){
			cin >> a[i];
		}
		int dem=0;
		for(int i=0; i<index; i++){
			int cnt = 0;
			for(int j=0; j<5; j++){
				if(a[j]==b[i][j]){
					cnt++;
				}
			}
			if(cnt==5){
				dem++;
			}
		}	
		if(dem>0){
cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
	return 0;
}
