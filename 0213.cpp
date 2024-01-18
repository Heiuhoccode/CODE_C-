#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		
		long long F[92];
		F[0]=0;
		F[1]=1;
		for(int i=2; i<92; i++){
			F[i]=F[i-1]+F[i-2];
		}

		int h = 0;
		for(int i=0; i<n; i++){
			if(a[i]==0||a[i]==1){
				cout << a[i] << " ";
			}
			else{
				for(int j=3; j<92; ){
					if(a[i]==F[j]){
						cout << a[i] << " ";
						j++;
					}
					else if(a[i]<F[j]){
						break;
					}
					else{
						j++;
					}
				}	
			}
			
		}
		cout << endl;
	}
}
