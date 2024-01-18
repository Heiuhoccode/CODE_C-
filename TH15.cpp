#include<bits/stdc++.h>

using namespace std;

int main(){
	char a[1001];
	cin.getline(a, 1001);
	for(int i=0 ;i<strlen(a); i++){
		if(a[i] >= 65 && a[i] <=88){
			a[i] += 2;
		}
		else if(a[i]== 89|| a[i]==90){
			a[i]-=24;
		}
		else if(a[i]>=99 && a[i] <=122){
			a[i]-=2;
		}
		else if(a[i]==97 || a[i]==98){
			a[i]+=24;
		}
	}
	for(int i=0 ;i<strlen(a); i++){
		cout << a[i];
	}
}
