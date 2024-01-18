#include<bits/stdc++.h>

using namespace std;

void s_number(int a[], int &h, int i){
	while(i>0){
		int b = i%10;
		a[h] = b;
		h++;
		i/=10;
	}
}

void arrange_result(int a[], int n){
	bool ascending;
	do{
		ascending = false;
		for(int i=1; i<n; i++){
			if(a[i-1]>a[i]){
				swap(a[i-1],a[i]);
				ascending = true;
			}
		}
	}while(ascending);
	
	for(int i=0; i<n-1; i++){
		if(a[i]!=10){
			for(int j=i+1; j<n; j++){
				if(a[j]!=10 && a[i]==a[j]){
					a[j] = 10;
				}
			}
		}
	}
	for(int i=0; i<n; i++){
		if(a[i]!=10){
			cout << a[i] << " ";
		}
	}
	cout << endl;
}



int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int number[n];
		for(int i=0; i<n; i++){
			cin >> number[i];
		}
		int h = 0;
		int small_nb[10000];
		for(int i=0; i<n; i++){
			s_number(small_nb,h,number[i]);
		}
		arrange_result(small_nb,h);		
	}

}
