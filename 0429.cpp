#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,k,b;
	cin >> n >> k >> b;
	int hong[b];
	for(int i=0; i<b; i++){
		cin >> hong[i];
	}
	int den[n]={0};
	for(int i=0; i<b; i++){
		den[hong[i]-1]=1;
	}
	int min = 1e9;
	for(int i=0; i<=n-k; i++){
		int denhong = 0;
		for(int j=0; j<k; j++){
			if(den[i+j]==1){
				denhong++;
			}
		}
		if(min > denhong){
			min = denhong;
		}
	}
	cout << min << endl;
}
