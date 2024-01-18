#include<bits/stdc++.h>

using namespace std;

int binary_search(int a[], int top, int last, int X){
	if(last>=1){
		int mid = (top + last)/2;
		if(a[mid]==X){
			return 1;
		}
		else if(a[mid]>X){
			return binary_search(a, top, mid-1, X);
		}
		else {
			return binary_search(a, mid+1, last, X);
		}
	}
	return 0;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, X;
		cin >> n >> X;
		int a[n];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		sort(a,a+n);
		int h = binary_search(a, 0, n-1, X);
		if(h==1){
			cout << 1 << endl;
		}
		else cout << -1 << endl;
	}
}
