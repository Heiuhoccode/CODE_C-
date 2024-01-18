#include<bits/stdc++.h>
using namespace std;

long long result(long long sodu, long long y, long long p){
    if(y==0) return 1;
    if(y==1) return sodu;
    long long a = result(sodu, y/2 ,p);
    long long k = (a*a)%p;
    if(y%2==0) return k;
    return k*sodu%p;

}

int main(){
    int t; cin >> t;
    while(t--){
        long long x,y,p;
        cin >> x >> y >> p;
        long long sodu = x%p;
        cout << result(sodu,y,p) << endl; 
    }
}