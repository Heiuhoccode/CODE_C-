#include <bits/stdc++.h>

using namespace std;

int tachso(int i, int p){
    int h = 0;
    while(i%p==0){
		i/=p;
    	h++;	
    }
    return h;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int N,p;
	    int x = 0;
	    cin >> N >> p;
	    for(int i=1; i<=N; i++){
	        x += tachso(i,p);
	    }
	    cout <<endl<< x << endl;		
	}

}
