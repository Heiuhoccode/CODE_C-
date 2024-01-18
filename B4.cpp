#include<bits/stdc++.h>

using namespace std;

long long change_min(long long a){
	long long sum = 0;
	long long i = 0;
	while(a>0){
		long long h = a%10;
		if(h==6){
			h=5;
		}
		sum += (long long)h*pow(10,i);
		i++;
		a/=10;
	}
	return sum;
}

long long change_max(long long a){
	long long sum = 0;
	long long i= 0;
	while(a>0){
		long long h = a%10;
		if(h==5){
			h=6;
		}
		sum += (long long)h*pow(10,i);
		i++;
		a/=10;
	}
	return sum;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		long long a,b;
		cin >> a >> b;
		long long min = change_min(a) + change_min(b);
		long long max = change_max(a) + change_max(b);
		cout << min << " " << max << endl;
	}
}
