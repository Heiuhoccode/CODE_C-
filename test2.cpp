#include <bits/stdc++.h>

using namespace std;


int main(){
	int a[5];
	for(int i=0; i<5; i++){
		a[i] = 5-1-i;
	}
	sort(a,a+n);
	for(int i=0; i<5; i++){
		cout << a[i] << " ";
	}
}