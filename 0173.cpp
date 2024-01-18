#include<bits/stdc++.h>

using namespace std;

long long ucln(long long a, long long b){
	if(b==0) return a;
	else return ucln(b, a%b);
}

long long result(int x, int y, int z, int n){
	long long bc_xy = x * y / ucln(x,y);
	long long bc_xyz = z * bc_xy / ucln(z,bc_xy);
	long long h = pow(10,n-1) / bc_xyz;
	if(h*bc_xyz == pow(10,n-1)){
		return bc_xyz*h;
	}
	else return bc_xyz*(h+1);
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int x,y,z,n;
		cin >> x >> y >> z >> n;
		if(result(x,y,z,n) >= pow(10,n) ){
			cout << -1 << endl;
		}
		else{
			cout << result(x,y,z,n) << endl;
		}
		
	}
}
