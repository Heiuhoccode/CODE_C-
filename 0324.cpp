#include<bits/stdc++.h>

using namespace std;

long long du(string a, long long m){
	long long sodu = 0;
	for(int i=0; i<a.size(); i++){
		sodu = sodu*10 + (a[i]-'0');
		sodu %= m;
	}
	return sodu;
}

long long result(long long sodu, long long b, long long M){
    if(b==0) return 1;
    if(b==1) return sodu % M;
    long long t = result(sodu, b/2, M);
    long long kp = (t*t) % M;
    if (b%2 ==0 ) return kp;
    return kp*sodu %M;
}

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string a;
        long long int b;
        long long int m;
        cin >> a >> b >> m;
        long long sodu=du(a,m);
        cout << result(sodu,b,m) << endl;       
    }

}
