#include <bits/stdc++.h>

using namespace std;

long long result(int N, long long K){
	long long sum = 0;
	for(int i=1;i<=N;i++){
		sum += i%K;
	}
	return sum;
}

int main(){
	int n;
	cin >> n;
	while(n--){
		int N;
		long long K;
		cin >> N >> K;
		if(result(N,K) == K){
			cout << 1 << endl;
		}
		else{
			cout << 0 << endl;
		}
		
	}
}
