#include <bits/stdc++.h>

using namespace std;

int unit( int a){
	int h = 0;
	while(a>0){
		h++;
		a/=10;
	}
	return h;
}

long long ucln(long long a, long long b){
    if (a == 0 || b == 0){
        return a + b;
    }
    while (a != b){
        if (a > b){
            a -= b;
        }else{
            b -= a;
        }
    }
    return a;
}

void result( long long a, long long x, long long y){
	long long z = ucln(x,y);
	for(long long i=0; i<z; i++){
		cout << a;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int a, x, y;
		cin >> a >> x >> y;
		result(a,x,y);
		cout << endl;
	}
}
