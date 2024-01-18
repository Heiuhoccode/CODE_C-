#include<bits/stdc++.h> 

using namespace std; 

void max(int a[], int m, int s){
	for(int i=0; i<m; i++){
		if(s>9){
			a[i] = 9;
			s -= 9;
		}
		else if(s>0){
			a[i] = s;
			s = 0;
		}
		else{
			a[i] = 0;
		}
	}
}

void min(int a[], int m, int s){
	s--;
	for(int i=m-1; i>=0; i--){
		if(s>9){
			a[i] = 9;
			s-=9;
		}
		else if(s>0){
			a[i] = s;
			s = 0;
		}
		else{
			a[i] = 0;
		}
	}
	a[0] += 1;
}

int main() { 
	int m, s;
	cin >> m >> s;
	int a[m], b[m];
	if(9*m<s || s==0){
		cout << "-1 -1";
	}
	else{
		min(a,m,s);
		max(b,m,s);
		for(int i=0; i<m; i++){
			cout << a[i];
		}
		cout << " ";
		for(int i=0; i<m; i++){
			cout << b[i];
		}
	}
}
