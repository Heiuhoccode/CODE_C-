#include<bits/stdc++.h>

using namespace std;

//void merge(int a[], int n,int &h){
//
//}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int z=0; z<n; z++){
			cin >> a[z];
		}
		int h = 0;
//		merge(a,n,h);
		int i = 0;
		int j = 0;
		while(i<n-j-1){
			if(a[i]>a[n-j-1]){
				a[n-j-2]+=a[n-j-1];
				j++;
				h++;
			}
			else if(a[i]<a[n-j-1]){
				a[i+1]+=a[i];
				i++;
				h++;
			}
			else{
				i++;
				j++;
			}
		}		
		cout << h << endl;
	}
}
