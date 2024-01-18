#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		long long a[n], b[m];	
		for(int i=0; i<n; i++){
			cin >> a[i];
			
		}
		for(int i=0; i<m; i++){
			cin >> b[i];
			
		}
		long long result = (*max_element(a,a+n))*(*min_element(b,b+m));
		cout << result << endl;
				
	}

}
