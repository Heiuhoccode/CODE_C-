#include<bits/stdc++.h>
using namespace std;
long long int scp(long long int a){
	long long int h = sqrt(a);
	if(h*h==a){
		return 1;
	}
	return 0;
}
void Faster() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int main(){
	Faster();
	int t;
	cin >> t;
	while(t--){
		long long int b, p;
		cin >> b >> p;
		long long int i=1;
		int cnt =0 ;
		while(i<=b){
			if((i*i)%p==1){
				cnt++;
			}i++;
		}
		cout << cnt << endl;
	}
}
