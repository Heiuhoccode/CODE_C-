#include<bits/stdc++.h>

using namespace std;

int result(int a[], int n, int x){
	if(x > a[n-1] || (x + a[0]) > a[n-1]){
		return -1;
	}
	else{
		int h = n-2;
		int k = n-1;
		while(a[k]-a[h]!=x && h>=0 && k>=0){
			if(a[k]-a[h] > x){
				k--;
			}
			if(a[k]-a[h] < x){
				h--;
			}
		}
		if(a[k]-a[h]==x){
			return 1;
		}
		return -1;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,x;
		cin >> n >> x;
		int a[n];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		sort(a,a+n);
		cout << result(a,n,x) << endl;
	}
}
